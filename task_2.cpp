#include<iostream>
using namespace std;

int main()
{
    float num1,num2;
    char choice,run;
    float sum,sub,pro,div;
    while(run!='n')
    {
        cout<<endl<<"           CALCULATOR         " <<endl;
        cout<<"Enter first number"<<endl;
        cin>>num1;
        cout<<"Choose an operation to perform"<<endl;
        cout<<"(+)Addition"<<endl<<"(-)Subtraction"<<endl<<"(*)Multiplication"<<endl<<"(/)Division"<<endl<<"(!)Exit"<<endl;
        cin>>choice;
        cout<<"Enter second number"<<endl;
        cin>>num2;
        switch(choice)
        {
            case '+':
            sum=num1+num2;
            cout<<"Addition = "<<sum<<endl;
            break;

            case '-':
            sub=num1-num2;
            cout<<"Subtraction = "<<sub<<endl;
            break;

            case '*':
            pro=num1*num2;
            cout<<"Multiplication = "<<pro<<endl;
            break;

            case '/':
            if (num2 != 0)
            {
                div=num1/num2;
                cout<<"Division = "<<div<< endl;
            }
            else
            {
                cout<<"Error: Cannot divide by zero"<< endl;
            }
            break;

            case '!' : exit(0);

            default : printf("wrong choice");
        }
        cout << "Do you want to perform more operations (y/n)"<<endl;
        cin>>run;
    }
    return 0;
}
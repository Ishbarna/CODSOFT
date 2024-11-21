#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main() 
{
    cout<<                   "               NUMBER GUESSING GAME                          "<<endl;
    srand((unsigned int)(time(0)));
    int a;
    int b;
    cout<<"Choose a Level"<<endl;
    cout<<"1. Easy "<<endl;
    cout<<"2. Hard "<<endl;
    cout<<"3. Exit "<<endl;
    cin>>b;
    while(b==1 || b==2 )
        {
        if(b==1){
            a=rand()%10+1;
            cout<<"Easy Level"<<endl;
            cout<<"(numbers range from 1 to 10)"<<endl;
        }
        else
        {
            a=rand()%1000+1;
            cout<<"Hard Level"<<endl;
            cout<<"(numbers range from 1 to 1000)"<<endl;
        }
        
        int n;
        cout<<"choose a number ";
        cin>>n;
    
        while(n!=a)
            {
            if(n<a)
                {
                    cout<<"your guess is low"<<endl;
                 }
            else{
                cout<<"your guess is high"<<endl;
            }
            cout<<"choose again "<<endl;
            cin>>n;
        }
        cout<<"you got it, number is : "<<a<<endl;
        cin>>b;
    }
    return 0;
}
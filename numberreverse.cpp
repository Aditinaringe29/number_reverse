#include<iostream>
using namespace std;
int main()
{
    int num1;
    int i;
    int num2;
    int num3=0;
    cout<<"enter a number";
    cin>>num1;
    cout<<num1<<endl;
    for(i=1;i<5;i++)
    {
        num2=num1%10;
        num1=num1/10;
        num3=(num3*10)+num2;
        
    }
    cout<<num3;
}
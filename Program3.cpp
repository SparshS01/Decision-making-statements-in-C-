
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the num 1: "<<endl;
    cin>>a;
    cout<<"enter the num 2: "<<endl;
    cin>>b;
    cout<<"enter the num 3:"<<endl;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        cout<<a<<" is the greatest number."<<endl;
        else
         cout<<c<<" is the greatest number."<<endl;
    }
    else
    {
        if(b>c)
         cout<<a<<" is the greatest number."<<endl;
        else
         cout<<c<<" is the greatest number."<<endl;
    }
}
    

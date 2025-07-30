#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,product,q,r;
    cout<<"Enter number 1:";
    cin>>a;
     cout<<"Enter number 2:";
     cin>>b;
 int choice;
 cout<<"1) Add"<<endl<<"2) Subtract"<<endl<<"3) Multipli"<<endl<<"4) Quotient"<<endl<<"5) Remainder"<<endl;
 cout<<endl<<"enter your choice:"<<endl;
 cin>>choice;
 switch(choice)
 {
     case 1:
    sum=a+b;
     cout<<"Add: "<<sum;
     break;
     case 2:
     sub=a-b;
     cout<<"Subtract: "<<sub;
     break;
     case 3:
      product=a*b;
     cout<<"Multipli: "<<product;
     break;
     case 4:
     q=a/b;
     cout<<"Quotient: "<<q;
     break;
     case 5:
     r=a%b;
     cout<<"Remainder: "<<r;
     break;
     default:
     cout<<"plese enter:)";
     break;
 }
}

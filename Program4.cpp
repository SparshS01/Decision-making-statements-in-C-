#include<iostream>
using namespace std;
int main()
{
 int choice;
 cout<<"1) pasta"<<endl<<"2) burger"<<endl<<"3) pizza"<<endl<<"4) sandwich"<<endl<<"5) noodles"<<endl;
 cout<<endl<<"enter your choice of lunch:"<<endl;
 cin>>choice;
 switch(choice)
 {
     case 1:
     cout<<"Enjoy your pasta :)";
     break;
     case 2:
     cout<<"Enjoy your burger :)";
     break;
     case 3:
     cout<<"Enjoy your pizza :)";
     break;
     case 4:
     cout<<"Enjoy your sandwich :)";
     break;
     case 5:
     cout<<"Enjoy your noodles :)";
     break;
     default:
     cout<<"plese order :) ";
     break;
 }
}

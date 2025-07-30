#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character"<<endl;
    cin>>ch;
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    cout<<"Character is a vowel: "<<ch<<endl;
    else
    cout<<"Character is not a vowel: "<<ch;
}

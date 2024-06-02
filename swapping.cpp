#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int temp;
        temp=a;
        a=b;
        b=temp;
    cout<<"after swapping a="<<a<<",b="<<b<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"enter principle rate = ";
    cin>>p;
    cout<<"enter rate = ";
    cin>>r;
    cout<<"enter time = ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"the simple interest is "<<si;
}
#include<iostream>
using namespace std;
class largest {
    private:
    int a,b,c;
    public:
     void input()
     {
        cout<<"enter a =";
        cin>>a;
        cout<<"enter b =";
        cin>>b;
        cout<<"enter c =";
        cin>>c;
     }   
       void condition() {
        if(a>b && a>c){
            cout<<"a is largest number";
        }
        else if(b>c){
            cout<<"b is largest number";
        }
        else{
            cout<<"c is largest number";
        }
    }  
};
    int main(){
        largest number;
        number.input();
        number.condition();
        return 0;
    }
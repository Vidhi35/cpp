#include<iostream>
using namespace std;
class area {
    private:
    int r,l,b,h,k;
    int areacir ,arearec ,areatri;

    public:
    void input(){
        cout<<"enter radius =";
        cin>>r;
        cout<<"enter lenght =";
        cin>>l;
        cout<<"enter breadth =";
        cin>>b;
        cout<<"enter height =";
        cin>>h;
        cout<<"enter base =";
        cin>>k;
    }
       void calc(){
           areacir = (3.14*r*r);
           arearec=(l*b);
           areatri =(0.5*h*b);
        }
        void output()
        {
          cout<<"area of circle is = "<<areacir<<endl ;
          cout<<"area of rectangle is = "<<arearec<<endl ;
          cout<<"area of triangle is = "<<areatri<<endl ;
        }
    };   
        int main(){
            area calculate;
            calculate.input();
            calculate.calc();
            calculate.output();
            return 0; 
        }  

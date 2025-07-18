#include<iostream>
using namespace std;
class demo{
    public:
    int a,b,c;
    demo(){
        a=90;
    }
        demo(int x){
        a=x;

    }
        demo(int x,int y){
        a=x;
        b=y;
    }
    demo(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    
    }
       void show(){
        cout<<"A= "<<a+a<<endl;
    }
   void show1(){
        cout<<"sum= "<<a+b<<endl;

    }
      void show2(){
        cout<<"ans= "<<(a*b)/c<<endl;

    }
}; 
int main(){
    demo d1;
        demo d2(12);
        demo d3(13,33);
        demo d4(22,3,3);
        d1.show();
         d2.show();
         d3.show1();
            d4.show2();
    return 0;
}
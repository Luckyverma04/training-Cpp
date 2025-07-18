#include<iostream>
using namespace std;
class demo{
    public:
    int a;
    demo(){
        a=9000;
    }
    void show(){
        cout<<"A= "<<a<<endl;

    }
};
int main(){
    demo d1,d2,d3;
    d1.show();
     d2.show();
      d3.show();
return 0;
}
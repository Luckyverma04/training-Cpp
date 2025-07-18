#include<iostream>
using namespace std;
int a=600;
int main(){
    int a =400,b;
    {
        b=a;
        int a=3000;
        cout<<"A"<<a<<endl;
        cout<<"B"<<b<<endl;
        cout<<"::A"<<::a<<endl;
    }

            cout<<"A"<<a<<endl;
        cout<<"::A"<<::a<<endl;

}
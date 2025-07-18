#include<iostream>
using namespace std;
int a=0;
class Demo{
    public:
    Demo(){
        cout<<"Constructor Working"<<++a<<endl;

    }
    ~Demo(){
        cout<<"Distructor Working"<<a--<<endl;

    }
};
int main(){
    cout<<"Main function start"<<endl;
    Demo d1,d2,d3,d4;
    {
        cout<<"First Block Start"<<endl;
        Demo d5,d6;
        cout<<"First Block close"<<endl;
    }
    {
        cout<<"second Block Start"<<endl;
        Demo d7,d8;
        cout<<"second Block close"<<endl;
    }
    cout<<"Main Block close"<<endl;
    return 0;
    
}
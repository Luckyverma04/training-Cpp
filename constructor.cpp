#include<iostream>
#include<string>
using namespace std;
class Fruit{
    public:
    string Name;
    int num;
    public:
    Fruit(){   //Constructor 
        cout<<"CODE-BY LUCKY"<<"\n";
    }
    
};
int main(){
    Fruit fruitObj1;
    Fruit myObj1; //call the constructor
    fruitObj1.Name="BANANA";
    fruitObj1.num=10;

    Fruit fruitObj2;
    fruitObj2.Name="mango";
    fruitObj2.num=40;

    cout<<fruitObj1.Name<<" "<<fruitObj1.num<<" "<<"\n";
    cout<<fruitObj2.Name<<" "<<fruitObj2.num<<" "<<"\n";

return 0;

}
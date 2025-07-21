#include<iostream>
using namespace std;

class Base
{
    public:
    int a[10], i;
    void get()
    {
        for(i = 0; i < 10; i++)
        {
            cout << "value = ";
            cin >> a[i];
        }
    }
};

class Sub : public Base
{
    public:
    void show()
    {
        cout << "Entered values are:\n";
        for(i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Sub s1;
    s1.get();
    s1.show();
    return 0;
}
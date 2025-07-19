#include<iostream>
using namespace std;
class Demo {
public:
    static int a[5];
    void show() {
        cout << "Array values are: ";
        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int Demo::a[5];
int main() {
        Demo d1;
    cout << "Enter 5 values:\n";
    for (int i = 0; i < 5; i++) {
        cout << "a[" << i << "] = ";
        cin >> Demo::a[i];//do not need object memory
    }
    d1.show();//help of an object share a copy of memory
    return 0;
}

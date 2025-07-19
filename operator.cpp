#include<iostream>
using namespace std;

class demo {
    int a[10]; 
public:
    void get() {
        for (int i = 0; i < 10; i++) {
            cout << "val[" << i << "] = ";
            cin >> a[i];
        }
    }

    void show() {
        for (int i = 0; i < 10; i++) {
            cout << "val[" << i << "] = " << a[i] << endl;
        }
    }

    // Overload + operator to add two objects
    demo operator+(demo &t1) {
        demo p1;
        for (int i = 0; i < 10; i++) {
            p1.a[i] = a[i] + t1.a[i];
        }
        return p1;
    }
};

int main() {
    demo d1, d2, d3;

    cout << "Enter 10 values for first object:\n";
    d1.get();

    cout << "Enter 10 values for second object:\n";
    d2.get();

    d3 = d1 + d2;

    cout << "\nValues after addition:\n";
    d3.show();

    return 0;
}

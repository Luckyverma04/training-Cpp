#include <iostream>
using namespace std;
class B; 

class A {
    int a;
    friend void swap(A &p1, B &p2); 
public:
    void get() {
        cout << "A = ";
        cin >> a;
    }
    void show() {
        cout << "A = " << a << endl;
    }
};

class B {
    int b;
    friend void swap(A &p1, B &p2); 
public:
    void get() {
        cout << "B = ";
        cin >> b;
    }
    void show() {
        cout << "B = " << b << endl;
    }
};
void swap(A &p1, B &p2) {
    int temp = p1.a;
    p1.a = p2.b;
    p2.b = temp;
}

int main() {
    A d1;
    B d2;
    
    d1.get();
    d2.get();
    
    swap(d1, d2);
    
    cout << "\nAfter Swapping:\n";
    d1.show();
    d2.show();
    return 0;
}

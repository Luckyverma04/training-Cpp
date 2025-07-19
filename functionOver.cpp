#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int Total1 = sum(1, 2);       
    cout << "Sum of 1 and 2 = " << Total1 << endl;

    int Total2 = sum(1, 2, 3);   
    cout << "Sum of 1, 2 and 3 = " << Total2 << endl;

    return 0;
}

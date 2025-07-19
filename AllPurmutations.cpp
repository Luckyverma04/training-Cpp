#include<iostream>
#include<string>
using namespace std;

class demo {
public:
    void getstring(string s) {
        cout << "Entered string: " << s << endl;
    }

    void permutation(string s, int l, int r) {
        if (l == r) {
            cout << s << endl;
        } else {
            for (int i = l; i <= r; i++) {
                swap(s[l], s[i]);  // fix character at position l
                permutation(s, l + 1, r); // recursive call
                swap(s[l], s[i]);  // backtrack
            }
        }
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();

    demo d;
    d.getstring(str);
    cout << "\nPermutations:\n";
    d.permutation(str, 0, n - 1);

    return 0;
}

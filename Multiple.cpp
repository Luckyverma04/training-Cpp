#include <iostream>
using namespace std;

class MP {
public:
    int mp[5];
    void getMP() {
        cout << "Enter marks for MP: ";
        for(int i = 0; i < 5; i++)
            cin >> mp[i];
    }
    void showMP() {
        cout << "Marks in MP: ";
        for(int i = 0; i < 5; i++)
            cout << mp[i] << " ";
        cout << endl;
    }
};

class UP {
public:
    int up[5];
    void getUP() {
        cout << "Enter marks for UP: ";
        for(int i = 0; i < 5; i++)
            cin >> up[i];
    }
    void showUP() {
        cout << "Marks in UP: ";
        for(int i = 0; i < 5; i++)
            cout << up[i] << " ";
        cout << endl;
    }
};

class GJ {
public:
    int gj[5];
    void getGJ() {
        cout << "Enter marks for GJ: ";
        for(int i = 0; i < 5; i++)
            cin >> gj[i];
    }
    void showGJ() {
        cout << "Marks in GJ: ";
        for(int i = 0; i < 5; i++)
            cout << gj[i] << " ";
        cout << endl;
    }
};

class Delhi : public MP, public UP, public GJ {
public:
    void getAll() {
        getMP();
        getUP();
        getGJ();
    }

    void showAll() {
        showMP();
        showUP();
        showGJ();
    }
};

int main() {
    Delhi d;
    d.getAll();
    d.showAll();
    return 0;
}
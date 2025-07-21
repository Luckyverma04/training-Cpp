#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    int eid;
    string ename;
    string eadd;
public:
    Employee(int id, string name, string add) {
        eid = id;
        ename = name;
        eadd = add;
    }
    void show() {
        cout << "Employee ID: " << eid << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Employee Address: " << eadd << endl;
    }
};
class Manager : public Employee {
protected:
    int e_no;
    float e_sal;
public:
    Manager(int id, string name, string add, int no, float sal)
        : Employee(id, name, add) {
        e_no = no;
        e_sal = sal;
    }

    void show() {
        Employee::show();
        cout << "Manager Number: " << e_no << endl;
        cout << "Manager Salary: " << e_sal << endl;
    }
};

class BranchManager : public Manager {
private:
    string c_location;
public:
    BranchManager(int id, string name, string add, int no, float sal, string location)
        : Manager(id, name, add, no, sal) {
        c_location = location;
    }

    void show() {
        Manager::show();
        cout << "Branch Location: " << c_location << endl;
    }
};

int main() {
    BranchManager bm(12, "Lucky", "Indore", 2004, 75000.50, "MP");
    bm.show();

    return 0;
}

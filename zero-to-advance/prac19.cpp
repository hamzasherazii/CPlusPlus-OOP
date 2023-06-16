// Create a base class called Employee with virtual functions calculateSalary() and displayDetails(). Derive two classes Manager and Developer from Employee and implement the virtual functions in each class according to their specific salary calculation and display details.

#include <iostream>
using namespace std;

class Employee{
    public:
    virtual void calculateSalary() = 0;
    virtual void displayDetails() = 0;  
};

class Manager : public Employee{
    public:
    double salary;
    void calculateSalary(){
        double hoursWorked;
        

        cout << "Enter the amout of hours the manager has worked: ";
        cin >> hoursWorked;

        salary = 60000 + 15*hoursWorked;
    }
    void displayDetails(){
        cout << "The manager earns $" << salary << " every month." << endl;
    }
};

class Developer : public Employee{
    public:
    double salary;
    void calculateSalary(){
        double hoursWorked;
        

        cout << "Enter the amout of hours the developer has worked: ";
        cin >> hoursWorked;

        salary = 40000 + 15*hoursWorked;
    }
    void displayDetails(){
        cout << "The develper earns $" << salary << " every month." << endl;
    }
};

int main(){
    // Manager m;
    // m.calculateSalary();
    // m.displayDetails();
    Employee *E;
    Manager m;
    E = &m;
    E->calculateSalary();
    E->displayDetails();
    cout << " ------------------------------- " << endl;
    Developer d;
    E = &d;
    E->calculateSalary();
    E->displayDetails();
    // Developer d;
    // d.calculateSalary();
    // d.displayDetails();
    return 0;
};
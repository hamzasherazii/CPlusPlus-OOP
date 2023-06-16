// Create a base class called Employee with virtual functions calculateSalary() and displayDetails(). Derive two classes Manager and Developer from Employee and implement the virtual functions in each class according to their specific salary calculation and display details.

#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int baseSalary;

    virtual int calculateSalary() = 0;
    virtual void displayDetails() = 0;
};

class Manager : public Employee {
public:
    int bonus;

    Manager(const string& name, double baseSalary, double bonus) : Employee(name, baseSalary), bonus(bonus) {}

    double calculateSalary() override {
        return baseSalary + bonus;
    }

    void displayDetails() override {
        cout << "Name: " << name << endl;
        cout << "Position: Manager" << endl;
        cout << "Base Salary: $" << baseSalary << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Salary: $" << calculateSalary() << endl;
    }
};

class Developer : public Employee {
public:
    int overtimeHours;
    double hourlyRate;

    Developer(const string& name, double baseSalary, int overtimeHours, double hourlyRate)
        : Employee(name, baseSalary), overtimeHours(overtimeHours), hourlyRate(hourlyRate) {}

    double calculateSalary() override {
        return baseSalary + (overtimeHours * hourlyRate);
    }

    void displayDetails() override {
        cout << "Name: " << name << endl;
        cout << "Position: Developer" << endl;
        cout << "Base Salary: $" << baseSalary << endl;
        cout << "Overtime Hours: " << overtimeHours << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
        cout << "Total Salary: $" << calculateSalary() << endl;
    }
};

int main() {
    Manager manager("Hamza Sherazi", 5000.0, 1500.0);
    manager.displayDetails();
    cout << endl;
    Developer developer("Saad Sherazi", 4000.0, 10, 20.0);
    developer.displayDetails();

    return 0;
}

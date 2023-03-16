#include <iostream>
#include <string>

using namespace std;

class Staff {
private:
    int staff_id;
    string name;
    float salary;

public:
    void acceptData() {
        cout << "Enter staff details:" << endl;
        cout << "Staff ID: ";
        cin >> staff_id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "Staff ID: " << staff_id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    string getName() {
        return name;
    }
};

int main() {
    const int MAX_STAFF = 20; 
    Staff staffList[MAX_STAFF];
    int choice, staffCount = 0;

    do {
        cout << "\nMenu" << endl;
        cout << "1. Accept data" << endl;
        cout << "2. Display data" << endl;
        cout << "3. Search data by name" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (staffCount >= MAX_STAFF) {
                    cout << "Maximum number of staff reached." << endl;
                } else {
                    staffList[staffCount].acceptData();
                    staffCount++;
                }
                break;

            case 2:
                if (staffCount == 0) {
                    cout << "No staff data entered." << endl;
                } else {
                    cout << "Staff details:" << endl;
                    for (int i = 0; i < staffCount; i++) {
                        staffList[i].displayData();
                    }
                }
                break;

            case 3:
                if (staffCount == 0) {
                    cout << "No staff data entered." << endl;
                } else {
                    string name;
                    cout << "Enter name to search: ";
                    cin.ignore();
                    getline(cin, name);
                    bool found = false;
                    for (int i = 0; i < staffCount; i++) {
                        if (staffList[i].getName() == name) {
                            staffList[i].displayData();
                            found = true;
                        }
                    }
                    if (!found) {
                        cout << "No staff with that name found." << endl;
                    }
                }
                break;

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

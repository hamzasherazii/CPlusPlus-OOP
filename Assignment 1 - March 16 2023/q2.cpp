#include <iostream>
using namespace std;

class Student
{
  int rollNumber;
  long phoneNumber;
  string address;

public:
  void condition(int roll, long phone, string addrs)
  {
    rollNumber = roll;
    phoneNumber = phone;
    address = addrs;
  }

  void displayData()
  {
    cout << "The roll no. of the student is " << rollNumber << endl;
    cout << "The phone no of the student is " << phoneNumber << endl;
    cout << "The address of the student is " << address << endl;
  }
};

int main()
{
  Student sami, john;
  cout << "STUDENT NAME: SAMI" << endl;
  sami.condition(127, 43171046156023, "House # 1122, street # 12.");
  sami.displayData();
  cout << "------------------------------" << endl;
  
  cout << "STUDENT NAME: JOHN" << endl;
  john.condition(126, 1285613445037, "House # 2211, street 21, phase 1, Etihad Town, Lahore.");
  john.displayData();
  return 0;
}
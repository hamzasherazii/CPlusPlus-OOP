#include <iostream>
using namespace std;

class Data {
private:
    int day;
    int month;
    int year;
public:
    void getDate() {
        cout << "Enter DATE in dd/mm/yyyy FORMAT: ";
        scanf("%d/%d/%d", &day, &month, &year);
    }
    void displayDate() {
        cout << "The date is: " << day << "/" << month << "/" << year << endl;
    }
};

int main() 
{
    Data myDate;
    myDate.getDate();
    myDate.displayDate();

    return 0;
}
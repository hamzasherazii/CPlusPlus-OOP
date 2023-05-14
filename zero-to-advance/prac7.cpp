// inheritance - access specifiers

#include <iostream>
using namespace std;

class sName{
//    public:
   protected:
   void sBio(){
    cout << "Student Bio" << endl;
   }
   public:
    string student = "Hamza";
};

class fName: public sName{
    public:
    // protected:
    void sBio1(){
        // cout << "Student Bio" << endl;
        sBio();
    }
    string father = "Tariq Hussain Sherazi";
};

int main(){
    fName sF;
    sF.sBio1();
    cout << sF.student << " - " << sF.father << endl;
}
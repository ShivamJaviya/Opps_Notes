#include<bits/stdc++.h>
using namespace std;

class Sms {
    public:
        // Overloaded constructors
        Sms() {
            cout << "Default constructor called!" << endl;
        }

        Sms(int content) {
            cout << content << endl;
        }

        Sms(const char* content) {
            cout << content << endl;
        }

        Sms(float content) {
            cout << content << endl;
        }

        Sms(double content) {
            cout << content << endl;
        }
};

int main() {
    Sms s1(10);            // Calls constructor for int
    Sms s2("Shivam");       // Calls constructor for const char*
    Sms s3(100.05f);        // Calls constructor for float
    Sms s4(1234567890.0);   // Calls constructor for double
    
    Sms s5;                 // Calls default constructor
    s5 = Sms(20);           // Creates another object with int

    return 0;
}

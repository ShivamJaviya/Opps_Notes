#include<bits/stdc++.h>
using namespace std;

class Student {
    private:
        int a, b;

    public:
        // Function to set values of a and b
        void set(int a1, int b1) {
            a = a1;
            b = b1;
        }

        // Function to display the values of a and b
        void display() {
            cout << "a = " << a << ", b = " << b << endl;
        }
};

int main() {
    Student s1;
    s1.set(10, 20);   // Set values first
    s1.display();     // Now display the values

    return 0;
}

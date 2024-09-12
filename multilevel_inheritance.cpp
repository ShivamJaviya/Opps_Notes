#include<bits/stdc++.h>
using namespace std;
class Person{

     public  :
     int age;
     string name;


};
class Student : public Person{

     public :
     int sid;

};

class Graduation : public Student{
     public :
     string Grad;
};
int main()
{
    Graduation s1;
    s1.age = 20;
    s1.name = "Shivam";
    s1.sid = 202312029;
    s1.Grad = "B.C.A";

    cout<<s1.age<<s1.name<<s1.sid<<s1.Grad<<endl;
    return 0;
}
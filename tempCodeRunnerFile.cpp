#include<bits/stdc++.h>
using namespace std;
class Person{
public:
     string name;
     int age;

     Person(string name,int age)
     {
          this->name = name;
          this->age = age;
     }
};

class Student : public Person{
     public :
     int sid;

     void info(){
          cout<<"Name "<<name<<endl;
          cout<<"Age "<<age<<endl;
          cout<<"S ID "<<sid<<endl;
     }
};
int main()
{
    Student s1;
    s1.name = "Mahadev";
    s1.age = 1000;
    s1.sid = 1;
    s1.info();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Teacher {
     public :
     string subject;
};

class Student :public Teacher {
     public :
     int strength;

};

class Graduation : public Teacher {

     public :
     string course_name;
     int course_id;

     void allinfo()
     {
          cout<<subject<<endl;
          cout<<course_name<<endl;
          cout<<course_id<<endl;
     }
};


int main()
{
    Graduation s1;
    s1.course_id = 333;
    s1.course_name = "MSCIT & MSCDS";
    s1.subject = "HMB";
    s1.allinfo();
    return 0;
}
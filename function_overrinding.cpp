#include<bits/stdc++.h>
using namespace std;
class Student{
     public :
     void info(){
          cout<<"Done from Student !!!";
     }
};
class School :public Student{

     public :
     void info(){
          cout<<"Done from School !!!";
     }
};
int main()
{
    Student s1;
    s1.info();
    School f1;
    s1.info();
    return 0;
}
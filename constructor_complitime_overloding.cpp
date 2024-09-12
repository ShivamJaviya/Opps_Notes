#include<bits/stdc++.h>
using namespace std;
class Person{

     public :
     int age;
     string name;

     Person(){

     }

     Person(int age,string name){
          this->age = age;
          this->name = name;
     }
};
int main()
{
    Person p1;
    Person p2(15,"Raj");


    return 0;
}
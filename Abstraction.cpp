#include<bits/stdc++.h>
using namespace std;
class Student{
     private :

     int a,b;

     public  :
      void set(int a,int b){
          a=a;
          b=b;
     }
     void display(){
          cout<<a;
          cout<<b;
     }
}
int main()
{
    Student s1;
    s1.display();
    s1.set(10,20);
    return 0;
}
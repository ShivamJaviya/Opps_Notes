#include<bits/stdc++.h>
using namespace std;
class student{
     public:
      int sid;
      
     private :
     int marks;

  public:
     void mark(int x,int y)
     {
          int marks = x+y;
          cout<<"Subject X marks is "<<x<<"Marks of Y is "<<y<<"Result : "<<marks<<endl;
     }
};
int main()
{
    student s1;
    s1.mark(10,20);

    return 0;
}
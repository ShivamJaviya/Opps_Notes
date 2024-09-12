#include<bits/stdc++.h>
using namespace std;
class student{
     public :
     int price;
     int quantity;

     student(int price,int quantity){
          this->price = price;
          this->quantity = quantity; 
     }
     void print()
     {
          cout<<"Price = "<<price<<"Quantity = "<<quantity<<endl;
     }
};
int main()
{
     student s1(10,5);
     student s2();
     s1.print();
     
    return 0;
}
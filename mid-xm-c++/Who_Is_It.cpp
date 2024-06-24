#include<bits/stdc++.h>
using namespace  std;
class Student{
    public:
    int roll;
    int cls;
    int gpa;
    Student(int r, int c, double g){
            this->roll = roll;
            this->cls = cls;
            this->gpa = gpa;
    }
};
int main()
{
    //  Student rahim(29 , 46, 5);
     Student *karim = new Student(29 , 46, 5);
     cout << karim->roll << " " << karim->gpa<< " "<< karim->cls<<endl;
   
   return 0;
}
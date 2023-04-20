#include<iostream>

using namespace std;

class Student{
       public:
    int age;
    int birth_year;

    void run{
        cout<<"Age "<<age<<" Birth Year "<<birth_year;
    }
}

int main()
{
    Student Bayezid;

    Bayezid.age = 21;
    Bayezid.birth_year = 2003;

    Bayezid.run ();
}
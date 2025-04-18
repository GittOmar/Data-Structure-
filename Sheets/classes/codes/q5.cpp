#include<iostream>
using namespace std;


class person
{
    string name;
    int age;
    float salary ;
 public:

    void enter(){

    cin>>name>>age>>salary;
    }

    void report()
    {
        cout<<name<<age<<salary<<endl;
    }



};



int main()
{
    person p[10];
     for(int i=0;i<10;i++)
     {
         p[i].enter();
     }
     for(int i=0;i<10;i++)p[i].report();
}

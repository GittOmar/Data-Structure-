#include<iostream>
using namespace std;

struct profile
{
string name;
int age;

};

int main()
{
 int num;
 cin>>num;
 profile student[num];

 for(int i=0;i<num;i++)
 {
     cin>>student[i].name;
     cin>>student[i].age;
 }
 cout<<endl<<endl;

 for(int i=0;i<num;i++)
 {
    cout<<student[i].name<<"  "<<student[i].age<<endl;
 }

}

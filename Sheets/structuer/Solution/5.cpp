#include<iostream>
#include<string.h> //p2
using namespace std;


struct student
{ char name [30]; int number , n_course; float degree[]; }students[100];

//student students[100]; // p1

void enter (int index)
{

    students[index].number = index;
    cin>>students[index].name;
    cin>>students[index].n_course;
    for(int i=0;i<students[index].n_course;i++)cin>>students[index].degree[i];

  /** cout<<"name "<<students[i].name<<endl;
   cout<<"number "<<students[i].number<<endl;
   cout<<"courses number "<<students[i].n_cources<<endl;
   for(int i=0;i<students[i].n_cources;i++)cout<<i+1<<" "<<degree[i]<<endl;
*/

}


void Search (char name[])
{
  for(int i=0;i<100;i++)
  {
      if(strcmp(name,students[i].name) == 0)
      {
           cout<<"name "<<students[i].name<<endl;
            for(int j=0;j<students[i].n_course;j++)cout<<j+1<<" "<<students[i].degree[j]<<endl;  // p3
            return;
      }
  }
  cout<<"NOT FOUND"<<endl;
}
int main()
{
  enter(5);
  Search("ahmed");
  Search("omar");
}

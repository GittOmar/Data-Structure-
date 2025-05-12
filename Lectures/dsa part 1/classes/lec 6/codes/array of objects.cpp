                    //   وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

class student
{

    int a,b;
public:
    student(int x,int y=2){a=x; b=y;}
    void print(){cout<<a<<endl;}

};
struct k
{

    int k;
};





int main()
{
student  f[2]={{1,2},{3,4}};
student *s=new student[2]{{1,2},{3,4}};
s[0].print();
(f+1)->print();

student *l=new student(1,2);
l->print();





}





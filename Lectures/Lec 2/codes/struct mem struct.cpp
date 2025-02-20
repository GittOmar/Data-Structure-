#include<iostream>
using namespace std;

struct  measure{

int m ,cm;
};

struct room {

string name;

struct measure l;
       measure w;
};



int main()
{
room r1 ={.name="living" , { m  : 1,.cm = 2 },{2,5}}; // mixed methods of input
// {.name="living" ,  m  : 1 , .cm = 2 ,  {2,5}}  -> error
//{ , {like this i enter to the second object } ,}

cout<<r1.name<<endl;
cout<<r1.l.m<<" "<<r1.l.cm<<endl;
cout<<r1.w.m<<" "<<r1.w.cm<<endl;


room r2;

cin>>r2.name;
cin>>  r2.l.m    >>  r2.l.cm; /// object.object.member
cin>>  r2.w.m    >>  r2.w.cm;


cout<<r2.name<<endl;
cout<<r2.l.m<<" "<<r2.l.cm<<endl;
cout<<r2.w.m<<" "<<r2.w.cm<<endl;



}

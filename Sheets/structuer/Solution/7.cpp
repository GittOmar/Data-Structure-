#include<iostream>
using namespace std;


struct fraction{

int n ,d ;

};
float multiply (fraction f1 , fraction f2)
{
   return (float)(f1.n*f2.d+f2.n*f1.d)/(f1.d*f2.d);
   //return (n1*d2+n2*d1)/(d1*d2);   /// what is this
}

int main()
{
    fraction f1 ,f2;
    cin>>f1.n>>f1.d;
    cin>>f2.n>>f2.d;
    cout<<multiply ( f1 ,  f2) ;
}

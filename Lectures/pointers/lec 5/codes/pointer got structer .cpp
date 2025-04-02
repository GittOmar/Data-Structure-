#include<iostream>
using namespace std;

int * fun( )
{static int y, *p; y=100; p=&y;
return p; }
int * fun_2( int n)
{  int x[10]; // if not use static, warning: address of local variable 'x' returned
cout<<"array in the function fun_2"<<endl;
for(int i=0; i<n;i++)
{ x[i]=2*i; cout<<" array "<<x[i]<<endl;}
return x; }
main( )
{ int *p; p=fun( );
cout<<" pointer "<<p<<" value "<<*p<<endl;
int n; cin>>n;
p=fun_2(n);
cout<< " array after calling function fun_2 "<<endl;
for(int i=0; i<n;i++)
cout<<" array value "<<*(p+i)<<endl;}

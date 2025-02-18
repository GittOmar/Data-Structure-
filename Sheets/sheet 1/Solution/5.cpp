#include<iostream>
using namespace std;

int main()
{
    char finish ;
    cin>> finish;

    for(int cycle = 0 ,  Cycles = ( finish - 'A' + 1 ); cycle < Cycles  && finish >='A' && finish<='Z' ;cycle++)
    {

        for(int i=Cycles-cycle;i>0;i--)cout<<" ";

        for(char i='A';i<='A'+cycle;i++) cout<<i;

        for(char i='A'+cycle-1; i>='A';i--) cout<<i;

        for(int i=Cycles-cycle;i>0;i--)cout<<" ";
        cout<<endl;
    }
}

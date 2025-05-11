#include<iostream>
using namespace std;


class test
{

    int a,b,c;
public:
    test(int q , int w , int e)
    {
        a = q;
        b = w;
        c = e;
    }
};


int main ()
{

    test t1(1,2,3);
    test t2[2]  = {test{1,2,3},test{1,2,3}};
    cout<<"isa u can"<<endl;

    int a[10] = {1,2,3,4};


}

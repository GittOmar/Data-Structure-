#include<iostream>
using namespace std;

int main()
{
    int *ipt =new int;
    float *fpt =new float;
    cin>>*ipt>>*fpt;
    cout<<ipt<<"   "<<*ipt<<endl;
    cout<<fpt<<"   "<<*fpt<<endl;
    delete ipt;
    delete fpt;

}

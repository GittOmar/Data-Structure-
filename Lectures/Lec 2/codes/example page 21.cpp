#include<iostream>
using namespace std;

struct Distance {

int km = 0  , m= 0  ,cm =0;
};

int main()
{
Distance  d1 , d2 ,res;

cin>>d1.km>>d1.m>>d1.cm;
cin>>d2.km>>d2.m>>d2.cm;

res.km = d1.km + d2.km;
res.m = d1.m + d2.m;
res.cm = d1.cm + d2.cm;

res.m += res.cm/100;
res.cm%=100;
res.km += res.m/1000;
res.m%=1000;

cout<<endl<<res.km<<" "<<res.m<<" "<<res.cm<<endl;

}

                    //   وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

class dist
{
    int km ,m ,cm;

public :
    void insert(){cin>>km>>m>>cm;}
    void print(){cout<<km<<" "<<m<<" "<<cm<<endl;}
    void add(dist *d1 , dist *d2);

};
void dist :: add(dist *d1 , dist *d2)
{
 km = d1->km+d2->km;
 m  = d1->m + d2->m;
 cm = d1->cm + d2->cm;


 m+=cm/100;
cm%=100;

km += (m/1000);
m %=1000;


}



int main()
{
    dist d1, d2,d3;
    d1.insert();
    d2.insert();

   d1.print();
   d2.print();

 d3.add(&d1,&d2);
 d3.print();


}




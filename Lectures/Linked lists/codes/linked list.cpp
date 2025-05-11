
                 //   وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ
#include<iostream>
//#include"cont.h"
using namespace std;



class Vector
{

    int arr[1000]={0};
    int last=0;
public:
    int N ;

    Vector(int s = 0);
    void insert(int value);
    void add(Vector b);
    void print(int index);
    void del(int index)
    {
     if(index>-1 && index<=last)
     {
         int k;
         for(int i=index;i<last;i++)
         {
             k = arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=k;
         }
             arr[last]=0;
             last--;
             N--;
}
    }
};
Vector::Vector( int s){N=s;}
void Vector::print(int index){cout<<arr[index]<<endl;}
void Vector::insert(int value){if(last<N) {arr[last]=value;last++;}}
void Vector::add(Vector b){
int s = N;
for(int i=0,j=s;i<b.N;i++,j++)
{
    arr[j]=b.arr[i];
    last++;
    N++;
}
}

int main()
{

Vector a(10),b(10);
for(int i=1;i<11;i++)a.insert(i);
for(int i=1;i<11;i++)b.insert(i*2);

for(int i=0;i<a.N;i++)a.print(i);
cout<<endl;
for(int i=0;i<b.N;i++)b.print(i);
cout<<endl;
a.add(b);
for(int i=0;i<a.N;i++)a.print(i);

a.del(1);
for(int i=0;i<a.N;i++)a.print(i);

}




#include<iostream>
#include"stackL.h"
using namespace std;






template<class type>
void array_push(stack<type> & S,int arr[], int size)
{
    for(int i=0;i<size;i++)S.push(arr[i]);
}

int main()
{
    stack <int>S;

int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++)cin>>arr[i];

array_push(S,arr ,N);


//for(int i=0;i<N;i++)s.push(arr[i]);

for(int i=0;i<N;i++)
{
    cout<<S.pop()<<"  ";
}








}

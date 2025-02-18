#include <iostream>
using namespace std;

int main()
{
int s;
cin>> s;
const int N = s;
int arr [N];
for(int i=0;i<N;i++) cin>> arr[i];

cout<<"Before : ";
for(int i=0;i<N;i++)cout<<arr[i]<<" ";
cout<<'\n';

for(int i=0;i<N/2;i++) // N/2 already floored 
{
    arr[i]+=arr[N-i-1];
    arr[N-i-1]=arr[i]-arr[N-i-1];
    arr[i]-=arr[N-i-1];
}

cout<<"After : ";
for(int i=0;i<N;i++)cout<<arr[i]<<" ";
cout<<'\n';


}
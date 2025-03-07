#include<iostream>
using namespace std;

int main()
{
    int arr[10] ;
    int *ptr = arr;
    for(int i=0;i<10;i++)
    {
        cin>>*ptr;
        ptr++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<*(arr+i)<<" ";   // u forget *
    }

}

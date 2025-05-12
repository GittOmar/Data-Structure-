#include<iostream>
using namespace std;
void Swap(int arr[],int index_a, int index_b)
{
      int t;
      t  =  arr[index_a];
      arr[index_a] = arr[index_b];
      arr[index_b] = t;
}
int min_index(int arr[] , int start )
{

    int cmp = arr[start];
    int min_index = start;
    for(int i = start+1;i<10;i++)
    {
        if(arr[i]<cmp)
        {
            cmp=arr[i];
            min_index = i;
        }
    }
    return min_index ;
}
void selection_sort(int arr[])
{
    for(int i=0;i<9;i++)
    {
     Swap(arr,i,min_index(arr,i));
    }
}


int main()
{
  int arr[10]={1,4,3,5,7,43,5,7,8,7};
  for(int i=0;i<10;i++)cout<<arr[i]<<" ";
  cout<<endl;
  selection_sort(arr);
  for(int i=0;i<10;i++)cout<<arr[i]<<" ";
  cout<<endl;
}

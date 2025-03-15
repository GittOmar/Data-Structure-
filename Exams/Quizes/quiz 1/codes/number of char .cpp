#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    string word ;
    cin>> word;
    int arr['z'+1]={0}; // dont use array before it instiallization to avoid error
    for(int i=0;i< word.length();i++)
    {
        arr[word[i]]++;
    }
    for(char i= 'a' ;i<='z';i++) // ascii code  upper case then lower case
    {
        if(arr[i]!=0 || arr[i-32]!=0)
        {
            cout<<i<<" "<<arr[i]+arr[i-32]<<endl;
        }
    }
}

#include<iostream>
#include<string.h>
using namespace std;




void StrToUpper(char str[ ])
{
 int diff = 'A' - 'a';
 cout<<diff<<endl;
 for(int i=0;i<strlen(str);i++)
 {
     if(str[i]<='z' && str[i]>='a')str[i]+=diff;
 }
}


int main()
{

    char arr[20];
    cin.getline(arr,20);
    StrToUpper(arr);
    cout<<arr;

}

#include<iostream>
using namespace std;

int main()
{
    char name[5]="omar";
    char name2[5];
    char name3 []={65,'h','m','e','d'}; // size is 5 here
    char name4 []= "hamed"; // size is 6

    cout<<sizeof(name4)/sizeof(char)<<endl;
    cout<<sizeof(name3)/sizeof(char)<<endl;
    cout<<name<<" "<<name2<<" "<<name3<<" "<<name4<<endl;

    int x ;
    x = 'A';
    cout<<x<<'\n'<<'\n';

    int t;
    for(int i=0;i<sizeof(name3)+1;i++)
    {
       t = name3[i];
       cout<<t<<'\n';
    }
    cout<<'\n';

    for(int i=0;i<sizeof(name3);i++)
    {
       t = name[i];
       cout<<t<<'\n';
    }

}

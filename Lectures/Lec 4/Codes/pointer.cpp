#include<iostream>
using namespace std;


int main()
{
    int x = 10;
    int *p =&x;
    cout<<p<<" "<<*p<<endl;

    *p = 6; // change value in varible x
    cout<<x<<endl;

     /// pointer to char
     char ch = 'd';
     char *ch_ptr = &ch;

     cout<<ch_ptr<<"    "<<*ch_ptr<<endl;
    /// pointer and strings using string pointer

    string st = "omar";
    string *sptr = &st;
    cout<<sptr<<"     "<<*sptr<<endl;


    /// pointer and strings using char pointer

    char *ss="ahmed";
    cout<<*ss<<"   "<<ss<<endl; // a ahmed

   /// NUll pointer

   int *pointer = nullptr ;
      cout<<pointer<<"     "<<endl; // ok
   // cout<<*pointer<<"     "<<endl; // error


 /// constant pointer
    const int s = 4;   //  constant varible only points to it using constant pointer

    // int *pp =&s;
    const *pp =&s;
    cout<<pp<<"    "<<&pp<<"    "<<*pp<<endl;
















 /// pointer and array

    char arr[10];
    char *ptr=arr;
    cout<<&arr<<endl;

/*

arr is equal to &arr[0]  which carry the address of the firest element in the array

&arr is pointer to the whole array



char *ptr = arr; ✅ (correct)
char *ptr = &arr[0]; ✅ (correct)
char *ptr = &arr; ❌ (incorrect due to type mismatch)
*/




}





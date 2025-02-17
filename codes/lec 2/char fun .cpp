#include<iostream>
#include<string.h> // function library

using namespace std;

int main()
{
    char arr1[5]="omar";
    char arr2[6]="ahmed";

    /// strcpy
    char cpy[10];
    strcpy(cpy,arr1);     // <-    copy flow
    cout<<cpy<<endl;

     /// strcat
    strcat(arr1,arr2);  // add arr2 in end of arr1   <-
    cout<< arr1 <<endl; //omarahmed

    ///strlen
    cout<<strlen(arr1)<<endl; // omarahmed = 9 chars

    ///strcmp

   /*
   in slides
   •When S1 and S2 are not the same, the value returned by
   strcmp () function is the difference between the
   ASCII values of the first unmatched characters in S1 and S2. */

    cout<<strcmp("Ab","kc")<<endl; // -1
        cout<<strcmp("bz","bc")<<endl; // 1
            cout<<strcmp("abc","abc")<<endl; // 0


 ///strchr
 char *Find="i love my cat and car"; // char pointer

  Find= strchr(Find,'c');
  cout<<*Find<<endl;







}

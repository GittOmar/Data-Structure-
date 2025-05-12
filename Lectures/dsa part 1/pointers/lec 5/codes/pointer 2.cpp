#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {11,22,33,      // row 1   are treated as array
                      44,55,66,     // row 2
                       77,88,99 };  // row 3

    int *x = *(arr); // address of row 1
    int *y = *(arr+1);// address of row 2
    int *z = *(arr +2); // address of row 3

    // x y z hold separated arrays
    cout<<*(x)<<endl;
    cout<<*(y+1)<<" "<<*(z+2)<<endl;

    int (*ptr)[3]=arr;

    // [i][j] == *(*(pointer+i)+j)


   char h[3][7] = {"omar", "ahmed", "sss"};
    char (*chptr)[7]=h;
    cout<<*(*(chptr+1)+2);

    char w[10]="hi bro";
    cout<<w<<endl;
    char *ww = w;
    cout<<w<<endl;

   // cout<<(*int)(w+1)<<endl;

    // string 1d
    // string array is 2d array
    string _1d ="omar";
    string _2d [2]= {"omar","ahmed"};
    string *pt1 = &_1d;
    //string (*pt2)[2]= _2d; // pointer to array of

  // cout<<pt1<<endl;
   //cout<<*(*(pt2+1)+2);

   int f [2][2] ={1,2,3,4};
   cout<<*f[1]<<endl;




    char *q ="omar";
     q="oaa";

    cout<<q<<endl;

    int *r;
    r= new int[10];

    int xx[10] ={0};
    r = xx;
    cout<<*r;
    delete r;
    cout<<*r;


}

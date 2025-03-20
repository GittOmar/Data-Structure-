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

    cout<<(*int)(w+1)<<endl;

}

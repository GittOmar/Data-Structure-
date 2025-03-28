#include<iostream>
#include<string.h>
using namespace std;

struct library {

int call_number[10];
int copies;
char author[40];
char title[100];
char description[300];
}books[50000];

void enter(int index,int call_number[] , int copies , char author[] , char title[] , char description[])
{
    for(int i=0;i<10;i++)
    {        books[index].call_number[i] = call_number[i];
    }
    books[index].copies = copies;
    strcpy(books[index].author , author); // p1
    strcpy(books[index].title , title);
    strcpy(books[index].description , description);
}



int main()
{
 // books= {{1,2,3,4,5} , 3 , "omar" , "atomic habits" , "well power book"}; // p2 use {} not () in struct instialization
 enter(0 , ? , 3 , "omar" , "atomic habits" , "well power book") ;

}

#include<iostream>
using namespace std;


struct  book
{

 char title [50];
 char author[50];
 char subject [50];
 int number;

};

void write(book &b1)
{
    cin.getline(b1.title,30);
    cin.getline(b1.author,30);
    cin.getline(b1.subject,30);
    cin>>b1.number;
}
void read(book b1)
{
    cout<<b1.title<<endl;
     cout<<b1.author<<endl;
      cout<<b1.subject<<endl;
       cout<<b1.number<<endl;
}




int main()
{
 book b1 , b2;
 write(b1);
 read(b1);
}

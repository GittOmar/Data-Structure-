#include<iostream>
using namespace std;


struct student
{
    string name;
    int num;
    string subjects [10];
    int score[10];
    int sum = 0 , avg = 0;
};


int main()
{
    student p1;
    cin>>p1.name>>p1.num;

    for(int i=0;i<p1.num;i++)
    {
        cin>>p1.subjects[i];
        cout<<"    ";
        cin>>p1.score[i];
        p1.sum+=p1.score[i];
    }
    p1.avg = p1.sum/p1.num;

    cout<<endl<<endl;
    for(int i=0;i<p1.num;i++)
    {
     cout<<p1.subjects[i]<<" : "<<p1.score[i]<<endl;
    }
     cout<<"sum : "<<p1.sum<<"   avg : "<<p1.avg;





}

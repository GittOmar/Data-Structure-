#include<iostream>
using namespace std;


class basic_info
{
private:

    string name;
    int roll;
    char sex;
    float weight ;
public:

    void get_data()
    {

        cin>>name>>roll>>sex>>weight;
    }
    void display()
    {
        cout<<name<<roll<<sex<<weight<<endl;
    }


};


int main()
{
 int n;
 cin>>n;
basic_info *b=new basic_info[n];


for(int i=0;i<n;i++)
{
 (b+i)->get_data();
}

for(int i=0;i<n;i++)b[i].display();

}

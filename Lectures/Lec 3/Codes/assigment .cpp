#include<iostream>
#include<string.h>
using namespace std;


struct student
{
 int id;
 char name[30];
 float  scores[100];
};


int search (char target[] , int n , student s[])
{ for(int i=0;i<n; i++)
{
 if(!strcmp(s[i].name , target))return i ;
}
 return -1;
}


float average(int  m , float scores[])
{ float av=0;
for(int i=0;i<m;i++) av+=scores[i];

return av/m;
}

main( ) {int i, j, k, n,m; student s[100]; char target[30];cin>> n>>m;
for (i=0 ; i<n; i++)
{cin>>s[i].id; cin>>s[i].name;
for(j=0 ;j<m; j++) cin>>s[i].scores[j];}
cout<<" enter name ";


cin>>target; k = search(target , n , s );


if(k< 0) cout<<"NOT FOUND"<<endl;
else{ cout<<" the student was found at "<<k<<endl;
cout<<average(m , s[k].scores)<<endl;

}
}

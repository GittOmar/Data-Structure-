
#include <iostream>
using namespace std;

main()
{
ios_base::sync_with_stdio(0); cin.tie(0);
int a[100], b[100]; int c[10][10], ct[10][10],cd;
int j,i, m, sumA, sumB, sumDiff;
sumA=0; sumB=0; sumDiff = 0;

// fun 1
cin >> m;
for(j=0; j < m; j++)
{ cin >> a[j] >> b[j];
sumA= sumA + a[j]; sumB = sumB + b[j];
sumDiff = sumDiff + (a[j] - b[j]);}


cout<<" the two arrays and their difference "<<endl;
for (j= m-1; j >=0; j--)
cout << a[j] << ' ' << b[j] << ' ' << a[j]-b[j]<< '\n';


cout<<" the sum of the two arrays "<<endl;
cout << " sumA "<<sumA<< ' ' <<" sumB "<<sumB<< '\n';

//  fun 2
cd=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++) cin>>c[i][j];
for(i=0;i<3;i++)cd=cd+c[i][i];
cout<<" sum of diagonal "<<cd<<endl<<endl;
cout<<" the transpose of c "<<endl<<endl;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
ct[i][j]=c[j][i];
for(i=0;i<3;i++)
{for(j=0;j<3;j++) cout<< ct[i][j]<<" ";cout<<endl;}}

/*
4
11 15
19 14
4 2
6 3
1 2 3 4 5 6 7 8 9









 the two arrays and their difference
6 3 3
4 2 2
19 14 5
11 15 -4

the sum of the two arrays
 sumA 40 sumB 34
 sum of diagonal 15

 the transpose of c


 1 4 7
 2 5 8
 3 6 9







 the two arrays and their difference
6 3 3
4 2 2
19 14 5
11 15 -4
 the sum of the two arrays

 sumA 40  sumB 34
 sum of diagonal 15

 the transpose of c

1 4 7
2 5 8
3 6 9


*/

#include<iostream>
using namespace std;

void info(int student , int subGrade ,int grades[][10]);
void calc(int M, int N, int total,int grades[10][10]);

int main()
{
    int grades[10][10];
    int M , N ,total;
    cout<<"Enter num of students and num of subjects"<<'\n';
    cin>> M >> N;
    cout<<"Full Mark out of :"<<endl;
    cin>> total;
    info(M, N, grades);  // Pass the grades array

    calc(M, N, total *N ,grades);  // Pass the grades array
}

void calc(int M, int N, int total,int grades[10][10])
{
    int sum;
    for(int i = 0; i < M; i++)
    {
        sum = 0;
        for(int l = 0; l < N; l++)
        {
            sum += grades[i][l];
        }
        cout << "student " << i+1 << " SUM : " << sum <<" out of "<<total<< "  avg : " << sum / N << endl;
    }
}

void info(int student , int subGrade ,int grades[][10])
{

    for(int i = 0; i < student; i++)
    {
        cout<<"enter grades of student " << i+1 <<" : "<<'\n';
        for(int j = 0; j < subGrade; j++)
        {
            cin >> grades[i][j];
        }
    }
}

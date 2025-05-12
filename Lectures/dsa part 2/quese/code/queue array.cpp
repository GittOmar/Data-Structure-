#include<iostream>
#include<cassert>
using namespace std;
const int MaxSize = 5;
template<class type>
class queue
{
 int f,r;
 type arr[MaxSize];
 int nextPos(int p){return (p+1)%MaxSize;}

 public:
     queue()
     {
        f = r =0;
     }



     bool IsEmpty(){return (r==f);}
     bool IsFull() {return (nextPos(r) == f);}

     void Enqueue(type e)
     {
         assert(!IsFull());
         r = nextPos(r);
         arr[r] = e;
     }

     type Dequeue()
     {
         assert(!IsEmpty());
         f = nextPos(f);
         return arr[f];
     }

     type front()
     {
         assert(!IsEmpty());
         return arr[nextPos(f)];
     }
};

int main()
{
    queue<int> q;
    for(int i=0;i<3;i++)q.Enqueue(i);
    for(int i=0;i<3;i++)
    {
        cout<<q.front()<<"  ";
        q.Dequeue();
    }




}

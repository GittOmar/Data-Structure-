#include<iostream>
#include<cassert>
using namespace std;

template<class type>
class queue
{
    struct node;
    typedef node* link;
    struct node
    {
        type value;
        link next;
    };
     link f , r;
 public:

    queue();
    bool isEmpty();
    type    Dequeue();
    type    front();
    void    Enqueue(type e);

};
template<class type>
queue<type>::queue()
{
    f = r = nullptr;
}

template<class type>
bool queue<type>::isEmpty()
{
    return (f==0) ;
}


template<class type>
void queue<type>::Enqueue(type e)
{
    node * added(new node);
    assert(added);

    added->value = e;
    added->next = nullptr;

    if(isEmpty()) { f = r = added ;}
    else
    {
        r->next = added;
        r= added;
    }

}

template<class type >
type queue<type>::Dequeue()
{
    assert(!isEmpty());
    int carryV;
    link carryA;

    // data trans
     carryV = f->value ;
     carryA = f;

    f = f->next;
    if(f == nullptr) r = nullptr; // never let rear lag front

    delete carryA;
    return carryV;
}


template<class type>
type queue<type>::front()
{
    assert(!isEmpty());
    return f->value;
}


int main()
{
    queue<double> q;
    for(int i=0;i<10;i++)
    {
        q.Enqueue(i);
    }

    for(int i=0;i<10;i++)
    {
        cout<<q.Dequeue()<<"  ";
    }
}

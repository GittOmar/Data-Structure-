
#include<iostream>               // floating top implimentaion
#include<cassert>
using namespace std;
const int MaxSize = 1000;
template<class type>
class stack
{

    // linked list structer
    struct node;
    typedef node* link;
    struct node
    {
        type value;
        link next;
    };
    link head;

  public:

    stack()
    {
        head  = nullptr;
    }

    void push(type e)
    {
     link added(new node);
     assert(added);

     added->next = head;
     head = added;
     head-> value = e;
    }

    type pop()
    {
        assert(head);

       // data store
        link rem = head;
        type data = head -> value;

        rem = head;
        head = head -> next;
        delete rem;


        return data;
    }

    type top();

    bool isEmpty()
    {
        return (head == nullptr);
    }

    bool isFull();


};
/*template<class type> // template must be written before any external function
bool stack<type>::isFull()
{
    return (topIndex != MaxSize-1);
}*/

template<class type>
type stack<type>::top()
{
    assert(head);
    return head->value;
}



int main()
{
    stack<int> l ;

    for(int i=0;i<10;i++)
    {
        l.push(i);
        cout<<l.top()<<"  ";
    }
    cout<<endl;


    l.pop();
    l.pop();
    cout<<l.top()<<endl;
    cout<<l.isEmpty()<<endl;
    // cout<<l.isFull()<<endl;
    cout<<sizeof(l)<<endl;
}

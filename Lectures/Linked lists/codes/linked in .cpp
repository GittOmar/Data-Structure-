#include<iostream>
#include<cassert>
using namespace std;

class linked_list
{
    struct node;
    typedef node* link;
    struct node
    {
        int value;
        link next;
    };
    link head , tail ,curr;
public:
     linked_list()
    {
        head  = 0;
        tail = 0;
        curr = 0;
    }
    void insert(int& e, bool F);
    void print()
    {
    for(curr = head ; curr!=0;curr=curr->next) cout<<curr->value<<"   ";  /// iterate on all linked list
    cout<<endl;
    }
    bool first(int&e) // check is empty
    {
        if(head == 0)return 0;
        curr = head;
        e = curr->value;
        return 1;
    }
    bool next(int &e)
    {
    if(curr== 0)return 0;
    curr = curr->next ;
    e = curr->value;
    return 1;
    }
    void search(int value);
    void empty()
    {
        link go;
        for(curr = head ; curr!=0; curr = go)
        {
          go = curr->next;
          delete curr;
        }
        head = tail = curr = 0; // important
    }
    void Goto (int x)
    {
        curr = head;
        for(int i = 0; i<x-1;i++) /// take care number of transactions = nth_node - 1
        {
            if(curr->next == 0)break;
            curr = curr->next;
        }
      cout<<curr->value<<endl;
    }
};

void linked_list:: insert(int& e,bool F=0)
{
    link added_node = new node;
    assert(added_node);
    added_node->value = e;


    if(head == 0)
    {
         head = tail = added_node;
         tail->next  = 0;
    }
    else if(!F)
    {
        tail->next = added_node; // instead of null
        tail = added_node; // tail shift
        tail->next = 0; // pointing to null
    }
    else
    {
        added_node->next = head;
        head = added_node;
    }
}

void linked_list::search(int value)
{
    int i = 1,found = 0;
    for(curr = head; curr!=0;curr=curr->next,i++)
    {
        if(curr->value == value)
        {
          found++;
          cout<<i<<" "<<curr<<endl;
        }
    }
    if(found == 0) cout<<-1;
}





int main()
{
int x = 0;
linked_list l1;


 l1.insert(x=1); l1.insert(x=3); l1.insert(x=3); l1.insert(x=2); l1.insert(x=4);
 l1.print();


l1.search(3);
l1.empty();
for(int i=0;i<10;i++)l1.insert(i,i%2);
l1.print();
l1.Goto(1);

}

#include<iostream>
#include<cassert>
using namespace std;

class linked_list
{
    typedef int   data ;
  struct node;
  typedef node*   link;
  struct node
  {
      data value;
      link next;
      link prev;
  };
   link curr , head , tail ;

   public:

    linked_list()
     {
           head = tail = curr = 0;
       }
    void insert (data &e)
    {

        link added = new node;
        assert(added);
        added->value = e;
        if(head == 0)  head = tail = curr = added;
        else
        {
            tail->next = added;
            tail = added;
        }
        tail->next = 0;
    }
    bool first  (data &e)
    {
      if(head  == 0)return 0;
      else
      {
          curr = head;
          e = curr->value;
      }
      return 1;
    }
    bool next   (data &e)
    {
        if(curr->next == 0) return 0;
        else
        {
            curr = curr->next;
            e= curr->value;
        }
        return 1;
    }
     void print()
    {
     curr  = head ;
     for(;curr->next != 0;curr=curr->next)cout<<curr->value<<" ";
     cout<<endl;
    }
};

void split(int target ,linked_list & l ,linked_list & l1 , linked_list & l2)
{
    int x ;
    bool found =l.first(x);
    while(found)
    {
        if(x >target)l1.insert(x);
        else l2.insert(x);
        found = l.next(x);
    }
}


int main()
{
    linked_list l , l1 , l2 ;
    for(int  i=0;i<10;i++) l.insert(i);

    l.print();
    split(5,l,l1,l2);
    l1.print();
    l2.print();


}

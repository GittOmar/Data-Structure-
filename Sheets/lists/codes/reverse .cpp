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
     for(;curr != 0;curr=curr->next)cout<<curr->value<<" ";
     cout<<endl;
    }

    void reverse(linked_list &l2)
    {
        curr = head;
        for(;curr!=0;curr= curr->next)
        {
            link added(new node);
            assert(added);
            added->value = curr->value;
            if(l2.head == 0 )
            {
                l2.head = l2.tail = added;
                l2. tail->next = 0;
            }
            else
            {
                added->next = l2.head;
                l2.head = added;
            }
        }
    }
};



int main()
{
 linked_list l,lr;
 for(int i=0 ; i<8;i++)l.insert(i);
 l.print();
 l.reverse(lr);
 lr.print();

}


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
    void insert (data e)
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
     for(;curr!= 0;curr=curr->next)cout<<curr->value<<" ";
     cout<<endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////
    void bubble_sort()
    {
        link curr2 = head;
        int t ;
        bool Swap = 1 ;

       while(Swap)
     {
         Swap = 0;
         for(;curr2 -> next!=0;curr2=curr2->next)
         {
             if(curr2->value > curr2->next->value)
             {
                 t= curr2->value;
                 curr2->value = curr2->next->value;
                 curr2->next->value = t;
                 Swap = 1;
             }
         }
         curr2 = head;
     }
    }
    ///////////////////////////////////////////////////////////////////////////////////
};



int main()
{
 linked_list l;
 l.insert(2222);
 l.insert(3);
 l.insert(5);
 l.insert(77);
 l.insert(-2);
 l.insert(-99);
 l.insert(222);

 l.print();
 l.bubble_sort();
 l.print();


}

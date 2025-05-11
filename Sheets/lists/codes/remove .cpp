// rem by value
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

    bool rem(int e)
    {
      curr = head;
      if(head->value == e)
      {
          head = head->next;
          delete curr;
          curr = head;
          return 1;
      }
      for(;curr->next!= nullptr &&  curr->next->value != e;curr= curr->next);
      if(curr -> next->value == e)
      {
        link is = curr->next;
        curr->next = curr->next->next;
        delete is; is =nullptr;
        if(curr -> next == 0) tail = curr;
        return 1;
      }
  return 0;
    }
};



int main()
{
 linked_list l;
 for(int i=0 ; i<8;i++)l.insert(i);
 l.print();



}

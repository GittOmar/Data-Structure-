#include<iostream>
#include<cassert>
using namespace std;



template<class type>
class linked_list
{

  struct node;
  typedef node*   link;
  struct node
  {
      type value;
      link next;
      link prev;
  };
   link curr , head , tail ;



   public:

    linked_list(){head = tail = curr = 0;}

    void insert (type &e)
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


    bool first  (type &e)
    {
      if(head  == 0)return 0;
      else
      {
          curr = head;
          e = curr->value;
      }
      return 1;
    }


    bool next   (type &e)
    {
        if(curr->next == 0) return 0;
        else
        {
            curr = curr->next;
            e= curr->value;
        }
        return 1;
    }

    void UpdateCurrent(type &e)
    {
        assert(curr);
        curr->value = e;
    }

    void deleteCurrent()
    {
    assert(curr);
    link del, p;

    if(head==curr) // delete from begin
    { del=curr; head=curr->next; curr=curr->next;
    delete del;
    return;
    }
    // delete from middle or end
    for(p=head;p->next!=curr;p=p->next);
    del=curr;
    p->next=curr->next;
    curr=curr->next;
    delete del;
    }


     void print()
    {
     curr  = head ;
     for(;curr != 0;curr=curr->next)cout<<curr->value<<" ";
     cout<<endl;
    }
};



int main()
{
 linked_list <int>l;
 for(int i=0 ; i<8;i++)l.insert(i);


}


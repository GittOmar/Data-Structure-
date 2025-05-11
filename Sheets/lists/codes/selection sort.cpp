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
     for(;curr != 0;curr=curr->next)cout<<curr->value<<" ";
     cout<<endl;
    }





    link  search_min(link start)
    {

        link curr3 = start;

        link minA = curr;
        int  minV = curr->value;

        for(;curr3!=nullptr;curr3 = curr3->next)
        {
            if(curr3->value < minV)
            {
                minA = curr3;
                minV = curr3->value;
            }
        }
        return minA;
    }



    void selection_sort()
    {
        curr  = head;
        link  curr2;
        int t;
        for(;curr -> next!= nullptr ;curr = curr->next)
        {

            curr2 = search_min(curr);

            t              = curr -> value;
            curr -> value  = curr2-> value;
            curr2-> value  = t;
        }
    }






};



int main()
{
 linked_list l;
 for(int i=0 ; i<8;i++)l.insert(i);

 l.insert(2222);
 l.insert(3);
 l.insert(5);
 l.insert(77);
 l.insert(-2);
 l.insert(-99);
 l.insert(222);

 l.print();
 l.selection_sort();
 l.print();


}


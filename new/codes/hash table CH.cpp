#include<iostream>
#include<cassert>
#include"list.h"
using namespace std;
const int MaxTableSize = 11;


template<class tableDataType>
class Table
{
     struct  item
    {
      int key;
      tableDataType data;
    };
    list<item> table[MaxTableSize]; // array of lists

    // functions
    int hash(int key){return key%MaxTableSize;}

public:
    /// insert
     void insert(int key , tableDataType data)
  {
      int pos = hash(key);

      item thisItem  , newItem;
      newItem.key   = key;
      newItem.data = data;

      bool found = table[pos].first(thisItem);
      while(found) // search in linked list for entry of same key
      {
        if(thisItem.key == key) // already Found
        {
            table[pos].updateCurrent(newItem); // data OverWrite
            return;
        }
        found = table[pos].next(thisItem);
      }
      // new entry
       table[pos].insert(newItem);
    }


     /// deleteKey
    void deleteKey(int key)
    {
      int pos = hash(key);
      item thisItem ;


      bool found = table[pos].first(thisItem);
      while(found) // search in linked list for entry of same key
      {
        if(thisItem.key == key) // already Found
        {
            table[pos].deleteCurrent();
            return;
        }
        found = table[pos].next(thisItem);
      }

    }


    ///lockUp
    bool lookup(int key , tableDataType & data)
    {
      int pos = hash(key);
      item thisItem ;


      bool found = table[pos].first(thisItem);
      while(found) // search in linked list for entry of same key
      {
        if(thisItem.key == key) // already Found
        {
            data  = thisItem.data;
            return 1;
        }
        found = table[pos].next(thisItem);
      }

      return 0;
    }

};

int main()
{

Table <int>t;

    int hold = 3;

    t.insert(4,3);
    cout<<t.lookup(4,hold)<<"   "<<hold<<endl;
    t.insert(4,55);
    cout<<t.lookup(4,hold)<<"   "<<hold<<endl;
    t.deleteKey(4);
    cout<<t.lookup(4,hold)<<endl<<endl;


    // same hashed key
    t.insert(3,hold = 3);
    cout<<t.lookup(3,hold)<<"   "<<hold<<endl;
    t.insert(14,hold = 44);
    cout<<t.lookup(14,hold)<<"   "<<hold<<endl;
    t.insert(25,hold = 200);
    cout<<t.lookup(25,hold)<<"   "<<hold<<endl;


    cout<<t.lookup(3,hold)<<"   "<<hold<<endl;

}

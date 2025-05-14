#include<iostream>
#include<cassert>
using namespace std;
const int MaxTableSize = 11;


template<class tableDataType>
class Table
{
    enum    itemType {Empty , Deleted , InUse};
    struct  item
    {
      itemType status;
      int key;
      tableDataType data;
    };
    item table[MaxTableSize]; // array of structs
    int entries;

    // functions
    int hash(int key){return key%MaxTableSize;}
    bool search(int &pos , int key)
    {
       for(;table[pos].status!=Empty; pos = (pos+1)%MaxTableSize)
       {
           if(table[pos].status==InUse && table[pos].key == key)return 1;
       }
       return 0;
    }


public:

    Table()
    {
        entries = 0;
        for(int i=0;i<MaxTableSize;i++)table[i].status = Empty;
    }


  void insert(int key , tableDataType data)
  {
      assert(entries != MaxTableSize); // not full check
      int pos = hash(key);
      if(!search(pos,key)) // in case not found create new entry
      {
        pos = hash(key);
        while(table[pos].status ==InUse) pos = (pos+1)%MaxTableSize;  // get first deleted or empty place
        entries++ ;
      }
      // in case of found overWrite is occuered
      table[pos].key = key;
      table[pos].data = data;
      table[pos].status =InUse;
  }

  void deleteKey(int key)
  {
        int pos = hash(key);
        if(search(pos,key))
        {
            table[pos].status = Deleted;
            entries--;
        }
    }

  bool lookup(int key , tableDataType &data)
  {
    int pos = hash(key);
    if(search(pos,key))
    {
        data  = table[pos].data;
        return 1;
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
    cout<<t.lookup(4,hold)<<endl;


    // same hashed key
    t.insert(3,hold = 3);
    cout<<t.lookup(3,hold)<<"   "<<hold<<endl;
    t.insert(14,hold = 44);
    cout<<t.lookup(14,hold)<<"   "<<hold<<endl;
    t.insert(25,hold = 44);
    cout<<t.lookup(25,hold)<<"   "<<hold<<endl;


    cout<<t.lookup(3,hold)<<"   "<<hold<<endl;




}

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

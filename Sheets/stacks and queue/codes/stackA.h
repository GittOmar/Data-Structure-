const int MaxSize = 1000;
template<class type>
class stack
{
    type  stackArray[MaxSize];
    int topIndex;

  public:

    stack()
    {
        topIndex = -1;
    }

    void push(type e)
    {
        assert(topIndex < MaxSize-1);
        topIndex++;
        stackArray[topIndex] = e;
    }

    type pop()
    {
        assert(topIndex>-1);
        topIndex--;
        return stackArray[topIndex];
    }

    type top();

    bool isEmpty()
    {
        return (topIndex == -1);
    }

    bool isFull();


};
template<class type> // template must be written before any external function
bool stack<type>::isFull()
{
    return (topIndex == MaxSize-1);
}

template<class type>
type stack<type>::top()
{
    assert(topIndex>-1);
    return stackArray[topIndex];
}

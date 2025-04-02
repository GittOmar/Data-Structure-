#include <iostream>

using namespace std;

int main() {
    /// Declaration
    int *pt = new int;
    *pt = 10;
    cout << pt << "      " << *pt << endl;

    delete pt;// The pointer becomes a dangling pointer, meaning it points to a memory location that has been freed.
    cout << pt << "      " << *pt << endl; // Undefined behavior (should avoid accessing deleted memory)

    /// Declaration with Initialization
    double *dd = new double(19.6);

    /// Array Element
    int *arr = new int[10]{1, 2, 3};
    arr[3] = 5;

    for (int i = 0; i < 10; i++)
        cout << arr[i] << "  ";
    cout << endl;

    /// arr carries location of the first element
    cout << &arr << "   " << &arr[0] << "   " << arr << endl; /// They are not the same

    delete[] arr; /// Corrected array deletion




    int *y , x(3) , z(5);
    y = new int ;

    y = &x ;
    cout<<*y<<endl;
    //delete y ;   error because cant delete x

   y =nullptr;
   delete y;


   y= new int; // if pointer is null so it must defined again as new int


   int sx =10;
   int *px =&sx;

   cout<<sizeof(px)<<"  "<<sizeof(*px);




    return 0;
}

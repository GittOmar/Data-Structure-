#include <iostream>
using namespace std;

class man {
    int x;  // Private member variable
    void xx() {} // Private member function

public:
    int y;  // Public member variable
    void yy() {} // Public member function

    int out(int, int, float);  // Function prototype
};





// Correctly defining the function outside the class
int man::out(int x, int y, float m) {
    return x + y + (m); // Explicit type conversion to int
}






int main() {
    man m1;

    // m1.xx();         // ❌ ERROR: Cannot access private function

    m1.yy();
    cout << m1.out(1, 2, 3.4) << endl;       // Output: 1 + 2 + 3 = 6 (float gets truncated)

    man *pman = &m1;
    cout<<pman->out(2,3,4)<<endl;


    pman->y = 10;
    cout<<pman->y<<endl;
    return 0;
}

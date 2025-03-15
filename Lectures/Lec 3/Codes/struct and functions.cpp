#include <iostream>
using namespace std;

// Define the struct
struct test {
    int x;
};

// Function that takes an integer and returns a struct
struct test its_ok(int value) {
    struct test temp;  // Create a struct variable
    temp.x = value;    // Assign the parameter value to struct member
    return temp;       // Return the struct
}

int main() {
    test t1, t2;

   t1 = its_ok(10); // Call function with parameter
    t2 = its_ok(20);

    cout << "Value of t1.x: " << t1.x << endl;
    cout << "Value of t2.x: " << t2.x << endl;


    return 0;
}

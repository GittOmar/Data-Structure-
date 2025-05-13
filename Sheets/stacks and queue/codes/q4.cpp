#include <iostream>
#include <sstream>
#include "stackL.h" // Assuming this is your custom stack<type> class

using namespace std;

template<class type>
int RPN(stack<type>& s, string x) {
    string token;
    stringstream ss(x);
    double a, b;

    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (s.isEmpty()) {
                cerr << "Error: insufficient operands\n";
                return -1;
            }
            b = s.top(); s.pop();  // Right operand
            if (s.isEmpty()) {
                cerr << "Error: insufficient operands\n";
                return -1;
            }
            a = s.top(); s.pop();  // Left operand

            if (token == "+") s.push(a + b);
            else if (token == "-") s.push(a - b);
            else if (token == "*") s.push(a * b);
            else if (token == "/") {
                if (b == 0) {
                    cerr << "Error: division by zero\n";
                    return -1;
                }
                s.push(a / b);
            }
        } else {
            // Assume it's a number
            stringstream conv(token);
            double num;
            conv >> num;
            if (conv.fail()) {
                cerr << "Error: invalid token '" << token << "'\n";
                return -1;
            }
            s.push(num);
        }
    }

    if (!s.isEmpty()) return s.top();
    else {
        cerr << "Error: empty result stack\n";
        return -1;
    }
}




int main()
{

    string x;
    cin>>x;
    stack<double> s;
    cout<<RPN(s,x);
}

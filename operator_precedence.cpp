#include <iostream>
#include<iomanip>
using namespace std;

int main()
{

    // contants for c++: the unchangable
    // const float a = 3.11;
    // cout << "The value of a was: " << a << endl;
    // a = 45.6;
    // cout << "The value of a is: " << a << endl;

    // Manipulators
    // int a = 3, b = 78, c = 1233;
    // cout << "The value of a without setw is: " << a << endl; // setw is used to print the width of the output
    // cout << "The value of b without setw is: " << b << endl;
    // cout << "The value of c without setw is: " << c << endl;

    // cout << "The value of a is: " << setw(4) << a << endl;
    // cout << "The value of b is: " << setw(4) << b << endl;
    // cout << "The value of c is: " << setw(4) << c << endl;

    //operatr precedence and associativity
    int a=3,b=4;
    // int c=(a*5)+b;
    int c=((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}

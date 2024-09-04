#include "MyArray.h"
#include <string>

int main()
{
    Array<int> a; // []
    Array<int> b(5, 0); //[0, 0, 0, 0, 0]
    Array<double> c(4, 9.99); //[9.99, 9.99, 9.99, 9.99]

    a.print();
    b.print();
    c.print();

    Array<string> d(3, "Hello itSTEP! ");
    d.print();
}


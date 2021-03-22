#include <iostream>

using namespace std;

int main()
{
    int *pt, var1;
    var1 = 10;
    pt = &var1;

    cout << "Address of var1 = " << &var1 << endl;
    cout << "The value of pointer variable = " << pt<< endl; /* You have already declared pointer variable ,
     just the pointer variable will indicate the address*/

    cout << "The value that the pointer variable points to = " <<*pt<< endl; /* dereferencing*/
    return 0;
}

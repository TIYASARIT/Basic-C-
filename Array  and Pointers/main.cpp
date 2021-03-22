#include <iostream>

using namespace std;

int main()
{
    int a[] = {6, 2, 1, 5,3};
    int *q;
    q=a;
    cout << a << endl; /*base address*/
    cout << a[0] << endl;
    cout << a+2 << endl;
    /*cout << &(a+2) << endl; /*error*/
    cout << *(q+2) << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{   int a[] = {6,2,1,5,3};
    int *q;

    q=a;

    cout << *(2+a)<< endl;
    cout << 2[a] << endl;
    cout << *(q+2) << endl;

    cout << a+1 << endl;
    cout << &a+1 << endl;
    cout << &a << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{   int n, i;
    bool isPrime = true; /* bool datatype is like flag*/
    cout << " Enter a positive integer: " << endl ;
    cin >> n;
    for (i=2; i<n/2; i++)
    {
        if(n%i == 0)
            {
             isPrime = false;
             break;
            }
    }
    if(isPrime == true)
        cout<<"This number is Prime number" << endl;
    else
        cout<<"This is not a Prime number" << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a;int b;int sum; int diff; int product; int quo;


    cout << "Enter a number!"<< endl;
    cin >> a;
    cout << "Enter another number."<< endl;
    cin >> b;


    sum = a+b;
    diff = a-b;
    product = a*b;
    quo =a/b;

    cout << "Sum ="<< sum <<endl;
    cout << "Diff ="<< diff <<endl;
    cout << "Product ="<< product <<endl;
    cout << "Quotient ="<< quo <<endl;




    return 0;
}

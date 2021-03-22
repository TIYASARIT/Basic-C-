#include <iostream>
/* array traversal*/
using namespace std;

int main()
{
    int a[50], size_array, i, pos,num;
    cout << " Print the size of array " << endl;
    cin >>  size_array ;
    if(size_array > 50)
    {
        cout << " Out of bound " << endl;
    }
    else
    {
        cout << " Enter the elements of array: "  << endl;
        for(i=0; i<size_array; i++)
            {
               cin>> a[i];
            }
        cout << " Enter the position and the element you want to insert: " << endl;
        cin>>pos>>num;
        for(i=size_array-1; i >= pos-1; i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size_array++;

        cout << " now the array is: "  << endl;
        for(i=0; i<size_array; i++)
            {
               cout<< a[i] <<endl;
            }

    }



    return 0;
}

#include <iostream>
/* array traversal*/
using namespace std;

int main()
{
    int a[50], size_array, i;
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
        cout << " Elements in array are: " << size_array << endl;
        for (i=0; i<size_array; i++){
            cout << a[i] <<endl;
        }
    }


    return 0;
}

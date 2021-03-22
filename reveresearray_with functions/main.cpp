#include <iostream>

using namespace std;
/* function for reversing*/
void reversearray(int array1[], int start1, int end1, int n)
{
    int temp;
    while(start1<end1)
    {
    temp = array1[start1];
    array1[start1]=array1[end1];
    array1[end1]=temp;

    start1++;
    end1--;
    }
    for(int i = 0; i < n; i++)

    {
        cout << array1[i] << endl;
    }


}


int main()
{
    int arr[50],n;
    cout<<"Enter the no. of elements of an array "<<endl;
    cin>>n;
    cout<<"Enter the elements of an array "<<endl;
    for(int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
    cout<<" The elements of an array are: "<<endl;
    for(int i = 0; i < n; i++)

    {
        cout << arr[i]<< endl;
    }
    cout<<"The reversed array is : "<< endl;
    reversearray(arr, 0, n-1, n);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{ int a[50],i,n;
  cout<<"Enter the no. of elements" << endl;
  cin>>n;
cout<<"Enter the elements" << endl;
  for (i =0; i<n; i++)
    {
      cin>>a[i];
    }
cout<<"Array in reversed order: " << endl;
  for (i =n-1; i>=0; i--)
    {
      cout<<a[i]<<endl;
    }



    return 0;
}

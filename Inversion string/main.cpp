#include <iostream>
#include <cstring>
using namespace std;
/* Program to check if the given string is palindrome or not*/
int main()
{    char string1[50];
     int length,i,flag =0 ;
    cout << "Enter a string " << endl;
    cin >> string1;
    length = strlen(string1);
    if(length % 2 ==0)
        { for(i =0; i<=length/2+1; i++)
        {
            if(string1[i]!=string1[length-i-1]){
                flag =1;
                break;
            }
        }
        if(flag)
    {

        cout<<" The string " << string1 << " is a not  palindrome "<<endl;

    }
    else
    {
        cout<<" The string " << string1 << " is a palindrome "<<endl;
    }

    }
    else
    {
        for(i =0; i<=length/2; i++)
        {
            if(string1[i]!=string1[length-i-1]){
                flag =1;
                break;
            }
        }
        if(flag)
    {

        cout<<" The string " << string1 << " is not a palindrome "<<endl;

    }
    else
    {
        cout<<" The string " << string1 << " is a palindrome "<<endl;
    }
    }
    cout<<
    return 0;
}

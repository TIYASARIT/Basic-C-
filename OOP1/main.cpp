#include <iostream>

using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout<<" Name: " << Name << endl;
        cout<<" Company: " << Company << endl;
        cout<<" Age: " << Age << endl;
    }


    };
int main()
{
    Employee employee1;
    employee1.Name = "Tiyasa";
    employee1.Company = "Steelcase";
    employee1.Age = 25;

    employee1.IntroduceYourself();



    Employee employee2;
    employee2.Name = "Nita";
    employee2.Company = "Homemaker";
    employee2.Age = 53;

    employee2.IntroduceYourself();


    return 0;
}

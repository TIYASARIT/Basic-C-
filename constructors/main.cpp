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
  /* Define a constructor*/
  Employee(string n, string c, int a){
      Name = n;
      Company = c;
      Age = a;}
    };

int main()
{
    Employee employee1 = Employee("Tiyasa","Steelcase",25);
        employee1.IntroduceYourself();
    Employee employee2 = Employee("Nita","Homemaker",53);
        employee2.IntroduceYourself();
    return 0;
}

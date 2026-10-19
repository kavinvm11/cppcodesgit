//friend function
//these are not members of a class but are used directly to access private class members
#include<iostream>
using namespace std;
class employee{
    private:
        int salary;
    public:                 //created constructor
        employee(int s){
            salary = s;
        }

        friend void displaysalary(employee x){
            cout<<"Salary: "<<x.salary;
        }
};

int main()
{
    employee obj1(50000);
    displaysalary(obj1);
    return 0;
}
//encapsulation
/*this is a practice of using 'private' access specifier to store sensitive data which can be modified by 
    trusted members using get an set methods*/
#include<iostream>
using namespace std;
class employee{
    private:
    int salary;         //private attribute
    public:
    //setter
    void setsalary(int s){
        salary = s;
    }
    //getter
    int getsalary(){
        return salary;
    }
};

int main()
{
    employee obj456;
    obj456.setsalary(50000);
    cout<<obj456.getsalary()<<'\n';
    return 0;
}
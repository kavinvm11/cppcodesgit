//constructors
//these are useful bcz till now to fill each attribute of an object , it must be done one by one
//constructors help in setting values to the object's attributes at once
//similar to methods they can be set inside or outside the class
//we can have more than one constructor (constructor overloading) but they must have different no. of parameters
#include <iostream>         //lets do it inside the class
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y,int z){        //these are constructors with parameters
        brand = x;
        model = y;
        year = z;                         //constructors are created using the name of the class
    }
};

int main()
{   //create car objects and call constructors
    car car_obj1("ford","mustang",1969);
    cout<<car_obj1.brand<<car_obj1.model<<car_obj1.year<<'\n';
    return 0;
}
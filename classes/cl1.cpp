//OOPS
//it is about creating objects which can hold data and functions that work on that data
//class defines what an object should look like
//object from a class inherits whatever (attributes)variables and (methods)functions are in it
//attributes and methods are called "class members"
//class is a user defined data type which gives a blueprint of the object
#include <iostream>
class myclass{                  //myclass is a class
    public:                     //this is an access specifier(to be studied later)
        int mynum;              //attribute(type int)
        std::string mystring;   //attribute(type string)
    };

int main()
{
    myclass myobj;              //myobj is an object of class myclass
    myobj.mynum = 13;
    myobj.mystring = "i am ironman";
    std::cout<<myobj.mynum<<" "<<myobj.mystring<<'\n';
    return 0;
}

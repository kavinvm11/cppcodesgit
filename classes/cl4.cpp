//access specifiers
//there are three types of access specifiers which are
        //public -> can be accessed from outside the class
        //private -> cannot be accessed from outside the class
        //protected -> same as public but can be accessed from subclasses of class
#include<iostream>
class myclass{
    public:
    int x;
    private:
    int y;
};

int main()
{
    myclass obj;
    obj.x = 7;          //this is valid. the value of x of obj is 7
    obj.y = 5;          //creates an error
    return 0;
}
//scope
//global variables can be accessed or modified from any function
#include <iostream>
int x = 5;//global variable
void myfunc()
{
    std::cout<<++x<<'\n';//prints 6 and also the global variable is modified
}
int main()
{
    myfunc();
    std::cout<<x<<'\n';//also prints 6
    return 0;
}
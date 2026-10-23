//lamba
//these are a type of functions used for short term usage
//we can use it inside functions (advantage)
/*SYNTAX
            [capture](parameters){code};
*/
//capture -> used to collect data outside the lambda
//parameters -> same like regular functions
#include <iostream>
int main()
{
    int x = 10;
    auto show = [x](){
        std::cout<<x<<'\n';       
    };
    show();//prints 10
    x = 6;
    show();//prints 10 , bcz once x is defined it doesnt change

    int y = 10;
    auto make = [&y](){
        std::cout<<y<<'\n';
    };
    make();//prints 10
    y = 6;
    make();//prints 6 , bcz here make() defines the address of y .
    return 0;
}

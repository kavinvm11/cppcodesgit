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

    show();
    return 0;
}
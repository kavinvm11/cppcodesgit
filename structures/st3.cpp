//enums
#include <iostream>
int main()
{
    enum level{
        low = 44,//by default in enum first variable is 0
                 //but here we assigned it 44
        medium,  //by default second variable is 1
                 //but here it is 44 + 1 = 45
        high = 32//     "       "       third  "  it is 2
                 //but here it is 32
    };
    enum level myvar1 = low;
    enum level myvar2 = medium;
    enum level myvar3 = high;
    std::cout<<myvar1<<'\n'<<myvar2<<'\n'<<myvar3<<'\n';
    return 0;
}
//prints
/*
    44
    45
    32
*/
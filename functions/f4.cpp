//recursion
//finding factorial of a number
#include<iostream>
int fact(int n)
{
    if (n>1){
        return n * fact(n - 1);
    }
    else{
        return 1;
    }
}
int main()
{
    std::cout<<fact(6)<<'\n';
    return 0;
}
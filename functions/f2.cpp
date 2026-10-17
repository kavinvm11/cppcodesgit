//pass by reference
#include <iostream>
void changeval(int &num)
{
    num = 50;
}
int main()
{
    int value = 10;
    changeval(value);//changes value from 10 to 50
    std::cout<<value<<'\n';//outputs 50
    return 0;
    /*this is very imp. idea as we cannot change the value stored 
      by a variable in main using operations done in changeval function*/
    //using references and pointers is very imp
}

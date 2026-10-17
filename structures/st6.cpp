//memory management
/*till now we just created a variable , stored its value 
  ,used it in operations and then left it as it is*/
//this uses up a lot of space
//thats why we use "new" and "delete"
#include <iostream>
using namespace std;
int main()
{
    int* ptr = new int;//new int creates memory space for one integer
    //ptr stores the address of the space
    *ptr = 4;//stores value 4
    cout<<*ptr<<'\n';//prints 4
//since we used it , now its time to delete
    delete ptr;//deletes the variable ptr which stored the memory add.
    return 0;
}
//pointers
#include<iostream>
using namespace std;
int main()
{
    string food = "idli";
//pointers are variables that stores the memory adress of the variable
    string* ptr = &food;//use type of whose add. is stored
//now here ptr is a variable which stores the add. of food


//dereferencing 
    cout<<ptr<<'\n';//outputs memory add. of food
    cout<<*ptr<<'\n';//outputs idli
/*THERE ARE TWO FUNCTIONS OF "*"
        -->>in 8th line creates a pointer
        -->>in 14th line acts as a dereference operator*/

//modifications 
    *ptr = "dosa";
    cout<<*ptr<<'\n';//outputs dosa
    cout<<food<<'\n';//outputs dosa
    return 0;
}
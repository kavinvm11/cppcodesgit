//references and memory address
#include <iostream>
using namespace std;
int main()
{
    string food = "pizza";
    string &meal = food; // here meal is an alias for food
    cout<<food<<'\n';//outputs pizza
    cout<<meal<<'\n';//outputs pizza

    meal = "burger"; //"changes both meal and food"
    cout<<food<<'\n';//outputs burger
    cout<<meal<<'\n';//outputs burger

    //& can also be used to output memory address
    cout<<&food<<'\n';//outputs (for eg. 0x7fded9)(in hexadecimal)
    return 0;
}
//default parameters
#include <iostream>
using namespace std;
void myfunc(string country = "sweden") 
{
    cout<<country<<'\n';
}
int main()
{
    myfunc("india");
    myfunc("norway");
    myfunc();
    myfunc("russia");
    return 0;
}
#include<iostream>
using namespace std;
int main(){
//struct has variables of different types
//they are called members
    struct{
        int num;
        string var;
    }my_struct1,my_struct2;         //my_struct is the name of the struct
    //below two lines assign a value to each members
    my_struct1.num = 12;
    my_struct1.var = "hello";
    cout<<my_struct1.num<<'\n';
    cout<<my_struct1.var<<'\n';
    return 0;
}
//the funda is struct gives all details for a variable
/*we can create a variable in the 9th line and fill whatever data we 
  we want to fill in the unfilled details*/
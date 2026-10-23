#include<iostream>
#include<array>
#include<tuple>
using namespace std;
// we cannot add elements in the middle
int main()
{
    array<int,5> math = {3,6,8,2,9};   // SYNTAX : array<data_type,sizeof array> array_name

//accessing elements
    cout<<math.at(2)<<'\n';            // prints 8
    cout<<get<3>(math)<<'\n';          // prints 2
    cout<<math[0]<<'\n';               // prints 3

    cout<<math.front()<<endl;          // prints first element
    cout<<math.back()<<endl;           //prints last element

//size
    cout<<math.size()<<endl;           //size of the array
    cout<<math.max_size()<<endl;        //max number of elements , an array can hold

    array<int,3> a = {1,2,3};
    array<int,3> b = {4,5,6};

//swap
    a.swap(b);                          //swaps contents
    for(auto x : a){
        cout<<x<<" ";
    }//prints 4 5 6 

//fill function
    array<int,5> arr;
    arr.fill(10);                       //fills all elements with 10
    cout<<boolalpha<<arr.empty()<<endl; // prints false
    for (auto x : arr){
        cout<<x<<" ";                   //prints 10 10 10 10 10 
    }

//data fuction
    array<int,3> qwerty = {3,4,5};
    int* ptr = qwerty.data();            //data() makes ptr point at the first element of the array
    cout<<*ptr<<endl;                   //prints 3
    
}
#include<iostream>
#include<list>
using namespace std;
//since its a doubly linked list , we can acccess elements from both the ends.
//forward list , which we will study later is a singly linked list, i.e., only accessible from the front.
int main()
{
    list<int> l = {3,4,5};
//addition of elements
    l.push_back(6);         //adds 6 as the ast element
    l.push_front(2);        //adds 2 as the first element
    //now l is{2,3,4,5,6}

    //METHOD 1

    auto it = l.begin();      /*here l.begin() gives an iterator which points to the first element of the list l
                                "it" is a short form for iterator (like ptr for pointer)
                                auto automatically gives the relevant data type to "it"*/
    advance(it,2);      //generally written as std::advance
    //data is stored in non contiguous memory thus we cannot jump straight to an element using it + 2. 
    //we can move one step at a time(like ++it). lists does not allow random access
    //thus we use advance (behind the scenes is : ++it ++it)(moves two steps separately)
    l.insert(it,9) ;    //inserts 9 at the place of the 3rd element

//ways to access elements

    // l = {2,3,9,4,5,6}
    l.front();          //used to access first element
    l.back();           //used to access last element

    //METHOD 2

    *next(l.begin(),3); /* here the pointer next(l.begin(),3) points at the 4th (index 3) element. * helps in 
                            dereferencing thus accessing 4th element*/
    //use assignment operator(i.e., = ) to modify elements

//how to change elements

    l.front() = 12 ;        // 2 changed to 12
    auto it1 = l.begin();
    advance(it1,2);
    *it1 = 23 ;              //3rd element 9 converts to 23
    // l = {12,3,23,4,5,6}


//finding elements
    //find() returns an iterator if element is found or else returns l.end() if not found
    auto it2 = find(l.begin(),l.end(),4);     //gives the address of 4th element to the iterator it2

//removal of elements

    l.pop_back();        //last element removed
    l.pop_front();      //first element removed
    
    auto it3 = l.begin();
    advance(it3, 2);
    l.erase(it3);        //3rd element removed

    auto it4 = l.end();
    advance(it4,-2);        //this is also valis=d i.e., using a negative number. this works similar to method 3
    l.erase(it4);

    //METHOD 3

    //if we need to do the same but from the last element then..
    auto it5 = l.end();
    it5 = prev(it4,2);      //use prev instead of advance here.since prev is not like advance we need to write like this    
    l.erase(it4);            //3rd elemets from the last is removed
                        
}                        
#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> fl1 ;         //this is an empty flist
    forward_list<int> fl2 (3,4) ;  //creates a f.list of size 3 and all elements are 4 i.e., {4,4,4}
    forward_list<int> fl3 = {2,3,4};
//addition of elements
    //same as list . but no "push_back()"
    //use insert_after() instead of insert()
//ways to access elements
    //no back()
//change elements
    //no back()
//finding elements //same
//removal of elements
    //no pop_back()
    //use erase_after() instead of erase()
//empty() works same
//size()
        //unlike vectors,arrays and lists, f.list does not have.size() function
    int size = distance(fl3.begin(),fl3.end());     //std::distance is a function which calculates the no. of elements
    //since there is no direct function to measure the size of a f.list we use "distance"
    //prints 4



}
                                //INTERESTING NOTE!!
            //insertion and deletion
                //arrays : no access    
                //vectors : only from the end
                //list : both from front and back
                //f.list : only from the front

#include<iostream>
#include<vector>
using namespace std;
//vectors can change its size whereas arrays cannot
//unlike list and f.list we can access any element easily
int main()
{
    vector<int> v = {3,2,4,5};
    v.push_back(6); //adds 6 at the end of the vector
    //syntax.      insert(position,value)
    v.insert(v.begin()+1,9); //adds 9 at v.begin(){which is the 0th element position} plus 1, which is 2nd element
    //now the vector is {3,9,2,4,5,6}
    //like arrays , use v[i] or v.at(i) to access elements
    //u can update elements by doing for eg.(v[2] = 76)
    //like arrays , v.size()
//CONCEPT
    /*we generally use "for(int x : v);" to access elements of the vector. the mechanism here is that we just
        take the copies of element using x and do whatever we want. but if u want to modify elements within a for 
        loop then this is a waste bcz its just copies*/
    /*therfore use "for(int &x : v); . here &x is a reference(alias) of the element. thus whatever change we do 
        affects the real elements in the vector"*/
    /* "for(const int &x : v); . this does not create any copies and also prevents any change in the 
        original data of the vector"*/
    v.pop_back();       //removes the last element of v
    v.erase(find(v.begin(),v.end(),2)); //removes the element 2
    //like arrays , v.empty()={0 if empty, 1 if non empty}
//MULTIDIMENSIONAL ARRAYS
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (const auto &row : matrix){
        for (const auto &x : row){
            cout<<x<<" ";
        }
        cout<<endl;                 /*prints        1 2 3
                                                    4 5 6
                                                    7 8 9       */
    }

}
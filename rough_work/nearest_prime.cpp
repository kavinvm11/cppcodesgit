#include<iostream>
using namespace std;
int prime(int m){
    if (m%2 == 0){
        return 0;
    }
    for(int i = 3;i*i<m;i+=2){          //see below for why we did i*i    
        if(m%i == 0){
            return 0;
        }
        else{
            continue;
        }
    }
    return 1;
}
int main()
{
    cout<<"enter an integer"<<endl;
    int x{};
    cin>>x;
    int right = x+1;
    int left = x-1;
    if (prime(x)){
        cout<<x<<" is the prime number"<<endl;
    }
    else{
        while(true){
            if(prime(right)||prime(left)){
                if(prime(right)&&prime(left)){
                    cout<<"both "<<right<<" and "<<left<<" are the nearest prime numbers"<<endl;
                }
                else if (prime(left)){
                    cout<<left<<" is the nearest prime number"<<endl;
                }
                else{
                    cout<<right<<" is the nearest prime number"<<endl;
                }
                break;
            }
            right++;
            left--;
        }
    }
    return 0;
}
                    //  IMPORTANT CONCEPT OF PRIME NUMBERS
    //it is not necessary to divide for i = m to i = (m-1) to find whether a number is prime or not
    //just divide from i = 2 to i = (square root of m) to find 
    //this method reduces the number of steps to solve
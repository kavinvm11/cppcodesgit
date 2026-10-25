#include<iostream>
using namespace std;
int prime(int m){
    for(int i = 3;i*i<m;i+=2){           
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
    int up{};
    int lp{};
    int ans{};
    for (int a = x;a++;){
        if (prime(a)){
            up = a;
            break;
        }
        else{
            continue;
        }
    }
    for (int b = x;b--;){
        if (prime(b)){
            lp = b;
            break;
        }
        else{
            continue;
        }
    }
    if(x-lp<up-x){
        ans = lp;
        cout<<ans<<" is the nearest prime number "<<endl;
    }
    else if (x-lp>up-x){
        ans = up;
        cout<<ans<<" is the nearest prime number "<<endl;
    }
    else{
        cout<<"both "<<lp<<" and "<<up<<" are correct"<<endl;
    }
    return 0;
}
                    //  IMPORTANT CONCEPT OF PRIME NUMBERS
    //it is not necessary to divide for i = m to i = (m-1) to find whether a number is prime or not
    //just divide from i = 2 to i = (square root of m) to find 
    //this method reduces the number of steps to solve
#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(x==0){return y;}
    if(y==0){return x;}
    if(x<y){return gcd(x,y%x);}
    if(y<x){return gcd(x%y,y);}
    if(x==y){return x;}
}
int main()
{
    int t{};
    cin>>t;
    for(int i=0;i<t;i++){
        int l,s,b;
        cin>>l>>s>>b;
        int hcf = gcd(s,b);
        int lc = (s*b)/hcf;
        int count=1,k=1;
        for(int j=1;;j++){
            if((j*lc)%l!=0){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}
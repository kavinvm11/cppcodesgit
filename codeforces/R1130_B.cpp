#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t{};
    cin>>t;
    for(int x=0;x<t;x++){
        int n{};
        int sum{};
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++){
            if(a[i]=='f'){
                sum++;
            }
            if(b[i]=='f'){
                sum++;
            }
        }
        if(sum%2==0){
            cout<<'0'<<"\n";
        }
        else{
            cout<<'1'<<"\n";
        }
    }
    return 0;
}
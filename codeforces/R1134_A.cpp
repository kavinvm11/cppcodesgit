#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((b-a)==1&&(c-b)==1){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n{};
    cout<<"enter the number of problems"<<endl;
    cin>>n;
    int a,b,c;
    int sum{};
    for(int i{};i<n;i++){
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
#include<iostream>
#include<string>
#include<array>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l,sum{};
        string s;
        char pen{'R'};
        cin>>l>>s;
        for(int j=0;j<l;j++){
            if(s[j]==pen){
                if(pen =='R'){
                    pen = 'B';
                }
                else{
                    pen = 'R';
                }
            }
            else{
                sum++;
            }
        }
        cout<<sum<<'\n';

    }
    return 0;
}
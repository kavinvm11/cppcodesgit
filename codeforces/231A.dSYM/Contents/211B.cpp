#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int f[n];
    for(int k=0;k<n;k++){
        cin>>f[k];
    }
    int min=0;
    for(int l=0;l<m;l++){
        min+=f[l];
    }
    int index=0;
    for(int i=1;i<(n-m+1);i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=f[i+j];
        }
        if(sum<min){
            min=sum;
            index=i;
        }
    }
    cout<<index+1<<'\n';
    return 0;
}
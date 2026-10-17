#include<iostream>
void changetemp(int &temp){
    temp-=273;
}
int main(){
    int kel = 342;
    changetemp(kel);
    std::cout<<kel<<'\n';
    return 0;
}
#include<iostream>
using namespace std;
int sum(int x, int y=0){
    if(x/10==0) return 0;
    y=y+x%10;
    return sum(x/10,y);
}
int main(){  
    int n,m;
    cout<<"enter a number: ";
    cin>>n;
    sum(n,m);
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    int num=0;
    while (x>0)
    {
        int lastdigit = x%10;
        num+=lastdigit;
        x/=10;
    }
    cout<<num<<endl;
    return 0;
}
    
#include<iostream>
using namespace std;
int main(){
    int i=0;
    for (int i = 0; i <= 10; i++)
    {
        cout<<"The number is "<< i<<endl;
    }
    while (i<=10)
    {
        cout<<i<<""<<endl;
        i+=1;
    }
    do
    {
        cout<<"the loop no is <5"<<endl;
        i++;
    } 
    while (i<=5);
    
    
    return 0;
}
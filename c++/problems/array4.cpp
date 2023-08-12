//sum of array
#include<iostream>
using namespace std;

int main(){
    int numbers[5];
    int sum=0;
    int size=sizeof(numbers)/sizeof(numbers[0]); 
    for (int idx=0; idx<5 ; idx++)
    {
        cin>>numbers[idx];
    }
    for (int idx=0; idx<5 ; idx++)
    {
        cout<<numbers[idx]<<" ";
    }
    for(int idx=0; idx<5; idx++){
        sum=sum+numbers[idx];
        cout<<sum<<endl;
    }
    for(int i=0;i<size;i++){
        sum+=numbers[i];
    }
    cout<<sum<<endl; 
    return 0; 
}

#include<iostream>
using namespace std;
//finding sum of arrays
int main(){
    int numbers[]={23,4535,42,65,34};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=numbers[i];
    }
    cout<<sum<<endl;
    return 0;
}
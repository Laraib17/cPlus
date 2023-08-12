//max number in the array
#include<iostream>

using namespace std;
int main(){
    int number[]={23,423,532,52,432,45,4,523,4,462,49,363,36,234,63,634,234,43,23,534,5,543,40,47,34,};
    int size=sizeof(number)/sizeof(number[0]);
    int max=number[0];
    for (int i = 1; i<size; i++)
    {
        if (number[i]>number[i-1])
        {
            max=number[i];
        }
    }
    cout<<max<<endl;
    return 0;
}

//search in array
#include<iostream>
using namespace std;
int main(){
    int number[]={23,43,24,49,32,5,454,324,43,54,75,86,45,67};
    int size=sizeof(number)/sizeof(number[0]);
    int y;
    cout<<"Enter number to search";
    cin>>y;
    for (int i = 0; i < size; i++)
    {
        if (y==number[i])
        {
            cout<<"Found the No."<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }    
    }    
    return 0;
}

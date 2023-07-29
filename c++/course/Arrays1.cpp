#include<iostream>
using namespace std;
//Array is a datastructure that stores a collection of homogeneous items.Stored in contiguos memory(Continuoous Block of memory).
/*It is represented as
                  _________________________
                  |  1 | 2  | 3  | 4  | 5 | 
                  -------------------------
index                0    1    2    3    4
position eg.        100  104  108  112  116   -> 4 gap because int takes 4 byte of storage. 
format: datatype name[ ].
It can be accessed using its index position. eg, array[2] will give 3, array[4] will give 5
size of array: it gives the total memory used up. 
*/
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
//    cout<<sizeof{array}/sizeof{array[0]}<<endl;
    int size=sizeof(array)/sizeof(array[0]);
    
    for( int x=0;x< size;x++){
        cout<<array[x]<<endl;
    }
    int index=0;
    while (index<size)
    {
        cout<<array[index]<<endl;
        index++;
    }
    
    return 0;
//Array are of two types: 1.Single dimentional     2.Multi-dimentional array 
}
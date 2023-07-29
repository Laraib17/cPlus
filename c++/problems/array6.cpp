#include<iostream>
using namespace std;
int main(){
    int v[]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,11};
    int size=sizeof(v)/sizeof(v[0]);
    int total=0;
    int sum=0;
    for (int i = 0; i<=size; i++)
    {
        for (int j = 0; j <=size; j++)
        {
            if (v[i]==v[j])
            {
                total++;
            }
            else{
                sum++;
            }
        }
        
    }
    cout<<"unique"<<total/(2*size);
    cout<<"same"<<(sum/(2*size))-1;
    return 0;
}
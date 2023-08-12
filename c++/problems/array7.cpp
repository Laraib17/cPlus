//largest element
#include<iostream>
using namespace std;
int largement(int v[], int size){
    int max=INT16_MIN;
    int maxind=-1;
    for (int i = 0; i <=size; i++)
    {
        if (v[i]>max)
        {
            max=v[i];
            maxind=i;
        }
        
    }
    return max;
}
int main(){
    int v[]={1, 2,3,4,5,6,7,8,9};
    int largement_2= largement(v,9);
    
    
    v[largement_2]=-1;
    int largement_3= largement(v,9);
    cout<<v[largement_3]<<endl;
    return 0;
}

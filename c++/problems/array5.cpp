#include<iostream>
using namespace std;
int main(){
    int v[]={3,4,6,7,1};
    int size=5;
    int total=0;
    int sum=0;
    for(int i=0;i<=size;i++){
        for (int j = 0; j<=size; j++)
        {
            if (v[i]+v[j]==7)
            {
                total++;
            }
            for (int k = 0; k <=size; k++)
            {
                if (v[i]+v[k]+v[j]==8)
                {
                    sum++;
                }
                
            }
        }
    }
    cout<<sum<<endl;
    cout<<total<<endl;
    return 0;
}
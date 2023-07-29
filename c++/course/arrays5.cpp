#include<iostream>
using namespace std;
class A{
    private:
    int a,b,c,d,e,f;
    public:
    void get_num(){
        cout<<"Enter row and colunms of first matrix :";
        cin>>a>>b;
        int arr[a][b];
        cout<<"Enter row and colunms of second matrix :";
        cin>>c>>d;
        int arr[c][d];
        cout<<"Enter elements into the first array: ";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr[a][b];
            }
        }
        cout<<"Enter elements into the second array: ";
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                cin>>arr[c][d];
            }
        }
    }
    void mult(){
        int arr[e][f];
        if(b!=c){
            cout<<"matrix multiplication not possible";
        }
        else{
            arr[e][f]=arr[a][b]*arr[c][d];        
        }
    }
    void dsiplay(){
        cout<<"the multiplied matrix: "<<arr[e][f];
    }
 
};
int main(){
    A a;
    a.get_num();
    a.mult();
    a.dsiplay();
    return 0;
}
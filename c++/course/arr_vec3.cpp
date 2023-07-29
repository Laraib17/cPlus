#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector <char> v;
    char x;
    int n,m;
    cout<<"rows in matrix: ";
    cin>>n;
    cout<<"colums in matrix: ";
    cin>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<"enter character: ";
            cout<<v[i][j];
        }
    }
    for(char k:v){
        cout<<k<<endl;
    }
    return 0;
} 
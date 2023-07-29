#include<iostream>
#include<vector>
using namespace std;
class A{
    private:
    int n;
    int m;
    vector<int> x;
    vector<int> y;
    vector<int> z;
    public:
    void getnum(){
        int ele1;
        int ele2;
        cout<<"total Elements in vector x:"<<endl;
        cin>>n;
        cout<<"total Elements in vector y:"<<endl;
        cin>>m;        
        cout<<"enter elements for first array:"<<endl;
        for(int i=0;i<n;i++){
            cin>>ele1;
            x.push_back(ele1);
        }
        cout<<"Enter elements for second array: ";
        for(int j=0;j<m;j++){
            cin>>ele2;
            y.push_back(ele2);
        }
    }
    void arrange(){
        int i=0; 
        int j=0;
        while(i<n || j<m){
            if(x[i]<y[j]){
                z.push_back(x[i]);
                i++;
            }
            else{
                z.push_back(y[j]);
                j++;
            }
        }
    }
    void display(){
        for (int x : z)
        cout<<x<<" ";
    }
};
int main(){
    A a;
    a.getnum();
    a.arrange();
    a.display();
    return 0;
}
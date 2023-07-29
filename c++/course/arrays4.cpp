#include<iostream>
#include<vector>
using namespace std;
class A{
    private:
    int n;
    int i=0;
    int j=n-1;
    int r=n-1;
    vector <int> x;
    vector <int> y;
    vector <int> z;
    public:
    void get_details(){
        cout<<"Enter the size of the arary:";
        cin>>n;
        cout<<"Enter element into vector x:";
        int ele1;
        for(int k=0;k<n;k++){
            x.push_back(ele1);
        }
        cout<<"Enter element into vector y:";
        int ele2;
        for(int k=0;k<n;k++){
            y.push_back(ele2);
        }
    }
    void arrange(){
        while(i<=j && r>=0){
            if(abs(x[i])>abs(x[j])){
                y[r]=x[i]*x[i];
                i++;
                r--;
            }
            else{
                y[r]=x[j]*x[j];
                j++;
                r--;
            }
        }
    }
    void display(){
        for(int x: z){
            cout<<x<<", ";
        }
    }
};
int main(){
    A a;
    a.get_details();
    a.arrange();
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
class A{
    private:
    int count=0;
    int target;
    int n;
    vector <int> v;
    public:
    void get_details(){
        cout<<"Enter the size of the array:";
        cin>>n;
        cout<<"Enter the target number: ";
        cin>>target;
        for(int i=0;i<n;i++){
            int ele;
            cout<<"Enter the elements of the array:";
            cin>>ele;
            v.push_back(ele);
        }
    }
    void check(){
        for(int i=0;i<n;i++){
            for(int j=0;j<i-1;j++){
                if(v[i]+v[j]==target){
                    count++;
                }
            }
        }
    }
    void display(){
        cout<<"Total no. of pairs:"<<count;
    }
};
int main(){
    A a;
    a.get_details();
    a.check();
    a.display();
    return 0;
}
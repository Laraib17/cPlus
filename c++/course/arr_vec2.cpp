#include <iostream>
//including vector
#include <vector>
using namespace std;
// Using Loops in vector
int main()
{
    vector<int> v;
    //taking input
    for (int i = 0; i < 5; i++)
    {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }
    //output
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //another way
    for (int ele:v)
    {
        cout<<ele<<"   ";
    }
    cout<<endl;
    cout<<v.size();
    cout<<endl;
    return 0;
}

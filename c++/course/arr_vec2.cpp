#include <iostream>
#include <vector>
using namespace std;
// Using Loops in vector
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int elements;
        cin >> elements;
        v.push_back(elements);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (int ele:v)
    {
        cout<<ele<<"   ";
    }
    cout<<endl;
    cout<<v.size();
    cout<<endl;
    return 0;
}
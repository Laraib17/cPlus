//arrays are a static that are  defined size we cannot resize it or increse elemnt even by one.but its possible in vector.
//Vector:Its a type of array but which is dynamic that can be resized when input/delete elements.
#include<iostream>
/*format: #inclde<vector>
          vector<datatype> vector name;
if even wanna declare size:
          vector<datatype vectoe name(size);
*/
#include<vector>
using namespace std;
int main(){ 

    vector<int> v;
//to know no. of elements in vector 
    cout<<"size of vector :"<<v.size()<<endl;

//capacity and size are similar but capacity>=vector always. which increases the vector by power of 2
    cout<<"capacity of vector :"<<v.capacity()<<endl;

// add elements:
    v.push_back(23);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

    v.push_back(44);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

    v.push_back(53);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

    v.push_back(14);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

//To Know No. of elements present in vector
    for (int x : v)
    cout<<x<<" ";
                //or
//to add from a start or end. format: v.insert(v.condition()+position,number) eg: add 5 from 2 posoition away from its starting.
    v.insert(v.begin()+5,49);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

    v.insert(v.begin()+6,89);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

    v.insert(v.begin()+7,58);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    
//if want to resize the vector
    v.resize(8);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;    

// to delete: from end "syntax: v.popback()" , from a certain point "syntax: v.erase(v.condition-position)", to delete all "syntax: v.clear"
    v.pop_back();
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;

// to know where it begins or it ends
    v.begin();
    v.end();

    v.erase(v.end()-2);
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    
    v.clear();
    cout<<"size of vector :"<<v.size()<<endl;
    cout<<"capacity of vector :"<<v.capacity()<<endl;
    return 0;
}
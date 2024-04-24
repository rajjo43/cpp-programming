#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);

    cout<<"\nThe size of v is:  "
    << v.size()  
    <<"\nThe capacity of v is: "
    <<v.capacity()
    <<"\n";

    for(int number:v)
    {
        cout<<number <<" ,";
    }
}
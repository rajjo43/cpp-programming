#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);

    cout<<"Vector contains:  ";
    for(size_t r=0;r<v.size();r++){
        cout<<v[r]<<" ";
    }

    cout<<"\nThe sum of the vector is:  "
    <<accumulate(v.begin(),v.end(),0)<<endl;

    cout<<"The inner product of v and itself is : "
    <<inner_product (v.begin(),v.end(),
                     v.begin(),0)<<endl;
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(2);
    st.push(4);
    st.push(5);

    int num=0;
    st.push(num);

    st.pop();
    st.pop();
    st.pop();

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>numbers{2,3};
    cout<<"Initial deque: ";
    for(int num:numbers)
    {
        cout<<num<<",";
    }

    numbers.push_back(4);
    numbers.push_front(1);

    cout<<"\nFinal deque: ";
    for(int num:numbers)
    {
        cout<<num<<",";
    }

     numbers.at(0)=5;
    numbers.at(1)=6;

    cout<<"\nFinal deque: ";
    for(int num:numbers)
    {
        cout<<num<<",";
    }
    return 0;
}


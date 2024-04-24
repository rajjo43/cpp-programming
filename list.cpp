#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> numbers={1,2,3};

    cout<<"Initial list:";
    for(int num:numbers)
    {
        cout<<num<<",";
    }

    numbers.push_front(5);
    numbers.push_back(10);


    cout<<endl<<"Final list:";
    for(int num:numbers)
    {
        cout<<num<<",";
    }

    numbers.reverse();
    cout<<"\nReverse list :";
     for(int num:numbers)
    {
        cout<<num<<",";
    }

    numbers.sort();
     cout<<"\nSorted list :";
     for(int num2:numbers)
    {
        cout<<num2<<",";
    }

    numbers.clear();
     cout<<"\nCleared  list :";
     for(int num:numbers)
    {
        cout<<num<<",";
    }
    return 0;
}
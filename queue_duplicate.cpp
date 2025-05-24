/*Given a string, str, the task is to remove all the duplicate adjacent characters from the given string.

Input: str= “azxxzy”
Output: ay*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<char> stk1, stk2;
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    // Remove adjacent duplicates using a stack
    for (char ch : str) {
        if (stk1.empty() || ch != stk1.top()) {
            stk1.push(ch);
        } else {
            stk1.pop();
        }
    }

    // Reverse stack to get correct order
    while (!stk1.empty()) {
        stk2.push(stk1.top());
        stk1.pop();
    }

    if (stk2.empty()) {
        cout << "Empty String" << endl;
    } else {
        while (!stk2.empty()) {
            cout << stk2.top();
            stk2.pop();
        }
        cout << endl;
    }

    return 0;
}

        stk2.push(stk1.top());
        stk1.pop();
    }

    while(!stk2.empty())
    {
        qu1.push(stk2.top());
        stk2.pop();
    }

    if(qu1.empty())
    {
        cout<<"Empty string"<<endl;
    }

    while(!qu1.empty())
    {
        cout<<qu1.front()<<" ";
        qu1.pop();
    }
    return 0;
}

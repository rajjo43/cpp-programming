/*Given a line of text, reverse the text without reversing the individual words.

For example,
Input: Technical Interview Preparation
Output: Preparation Interview Technical*/

#include <iostream>
#include <queue>
#include <stack>
#include <sstream>
using namespace std;

int main() {
    string line;
    cout << "Enter line: ";
    getline(cin, line);  // Read the entire line including spaces
    
    queue<string> q;
    stringstream ss(line);
    string word;

    // Enqueue all words into the queue
    while (ss >> word) {
        q.push(word);
    }

    stack<string> st;

    // Move all words from queue to stack to reverse order
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // Print words in reverse order
    while (!st.empty()) {
        cout << st.top();
        st.pop();
        if (!st.empty()) cout << " ";
    }
    cout << endl;

    return 0;
}

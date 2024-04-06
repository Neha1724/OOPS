#include<iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    
    stack<int> myStack;

    
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    
    while (!myStack.empty())
    {   
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}

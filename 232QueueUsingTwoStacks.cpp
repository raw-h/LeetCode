#include<bits/stdc++.h>
using namespace std;

class MyQueue
{
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        while (s1.size() > 0)
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);

        while (s2.size() > 0)
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop()
    {
        if (s1.size() == 0)
            return -1;
        else
        {
            int val = s1.top();
            s1.pop();
            return val;
        }
    }

    int peek()
    {
        return s1.top();
    }

    bool empty()
    {
        if (s1.size() == 0)
            return true;
        return false;
    }
};

int main(){
    return 0;
}
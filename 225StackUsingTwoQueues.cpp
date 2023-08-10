#include<bits/stdc++.h>
using namespace std;

class MyStack {
        queue<int> q1;
        queue<int> q2;
public:
    MyStack() {        
    }
    
    void push(int x) {
        while(q1.size() > 0){
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        while(q2.size() > 0){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        if(q1.size() == 0)
            return -1;
        
        else{
            int val = q1.front();
            q1.pop();
            return val;
        }
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        if(q1.size() == 0)
            return true;
        return false;
    }
};

int main(){
    return 0;
}
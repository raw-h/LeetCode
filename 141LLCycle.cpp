#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head)
{
    // Using maps
    /*
    map<ListNode*, bool>visited;
    ListNode*temp = head;
    while(temp!= NULL){
        if(visited[temp] == true)
            return true;
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
    */

    // Using Floyd Cycle Detection Algorithm
    ListNode *slow = head;
    ListNode *fast = head;
    while (slow != NULL && fast != NULL)
    {
        if (slow == NULL || slow->next == NULL)
        {
            return false;
        }
        while (slow != NULL && fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
            if (slow == fast)
            {
                return true;
            }
        }
    }
    return false;
}

int main(){
    return 0;
}
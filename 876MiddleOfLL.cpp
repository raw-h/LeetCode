#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head->next;
    if (slow == NULL || fast == NULL)
        return head;
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
    }
    return slow;
}

int main()
{
    return 0;
}
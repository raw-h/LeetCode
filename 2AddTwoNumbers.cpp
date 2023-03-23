#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next){}
};

ListNode *rev(ListNode *head)
{
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(ListNode *&head, ListNode *&tail, int value)
{
    ListNode *temp = new ListNode(value);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

ListNode *add(ListNode *&first, ListNode *&second)
{
    int carry = 0;
    ListNode *ansHead = NULL;
    ListNode *ansTail = ansHead;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        int val2 = 0;

        if (first != NULL)
            val1 = first->val;

        if (second != NULL)
            val2 = second->val;

        int sum = carry + val1 + val2;
        int digit = sum % 10;

        carry = sum / 10;

        insertAtTail(ansHead, ansTail, digit);
        if (first != NULL)
            first = first->next;
        if (second != NULL)
            second = second->next;
    }
    return ansHead;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    // first = rev(first);
    // second = rev(second);

    ListNode *answer = add(l1, l2);
    return answer;
}

int main(){
    return 0;
}
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

int lengthLL(ListNode *&head)
{
    int count = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    ListNode *first = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(4);
    ListNode *fifth = new ListNode(5);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    int k = 2;
    int length = lengthLL(first);
    cout << length << endl;
    int arr[length];
    ListNode *temp = first;
    int i = 0;
    while (temp != NULL && i < length)
    {
        arr[i] = temp->val;
        i++;
        temp = temp->next;
    }
    int data = arr[k - 1];
    arr[k - 1] = arr[length - k];
    arr[length - k] = data;
    temp = first;
    i = 0;
    while (temp != NULL && i < length)
    {
        temp->val = arr[i];
        temp = temp->next;
        i++;
    }
    return 0;
}
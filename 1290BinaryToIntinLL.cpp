#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next){}
};
int getLength(ListNode *head)
{
    int length = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
int getDecimalValue(ListNode *head)
{
    int n = getLength(head);
    n--;
    ListNode *temp = head;
    int number = 0;
    while (temp != NULL)
    {
        number += ((temp->val) * pow(2, n));
        temp = temp->next;
        n--;
    }
    return number;
}

int main(){
    return 0;
}
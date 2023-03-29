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

bool isPlaindrome(ListNode * head){
    ListNode *temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    int arr[length];
    temp = head;
    int i = 0;
    while(temp != NULL){
        arr[i] = temp->val;
        i++;
        temp = temp->next;
    }
    cout << endl;
    for(int i = 0; i < (length/ 2); i++){
        if(arr[i] != arr[length - i - 1])
            return false;
    }
    return true;
}
int main()
{
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(2);
    ListNode *fourth = new ListNode(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    bool answer = isPlaindrome(head);
    cout << answer << endl;
    return 0;
}
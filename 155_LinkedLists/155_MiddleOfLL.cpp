/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// count var approach
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        int count = 1;
        ListNode *newnode = head;
        while (newnode->next != NULL)
        {
            newnode = newnode->next;
            count++;
        }
        int temp = count / 2;
        ListNode *newnode1 = head;
        while (temp)
        {
            newnode1 = newnode1->next;
            temp--;
        }
        return newnode1;
    }
};

// Slow and fast pointer approach
ListNode *middleNode(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 0;
        while (temp) {
            temp = temp->next;
            n++;
        }
        temp = head;
        n = n/k;
        ListNode dummy;
        dummy.next = head;
        ListNode* before = &dummy; //stays behind each group
        ListNode* groupTail = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while(n--) {
            groupTail = curr;
            for (int i = 0; i < k; i++) {
                next = curr->next;
                curr -> next = prev;
                prev = curr;
                curr = next;
            }
            before->next = prev; //connects tail of prev group to new head of curr group
            groupTail -> next = curr; //connect new tail of current group to next group head
            before = groupTail; //get behind the next group
        }
        return dummy.next;
    }
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        int pos = count - n;
        if(pos == 0) {
            return head->next;
        }
        temp = head;

        for(int i = 1; i < pos; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};

//Qlink-> https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//Code

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
        int size = cnt;
        int pos = size-n+1;
        if(pos==1)
        {
            ListNode *temp = head;
            head = head->next;
            temp->next = NULL;
        }
        else
        {
            ListNode *curr = head;
            ListNode *prev = NULL;
            int ap = 1;
            while(ap<pos)
            {
                prev = curr;
                curr = curr->next;
                ap++;
            }
            prev->next = curr->next;
            curr->next = NULL;
        }

        return head;
    }
};

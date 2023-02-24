//Qlink-> https://leetcode.com/problems/intersection-of-two-linked-lists/
//Code

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map <ListNode*,int> m;
        if(headA==headB)
        {
            return headA;
        }
        ListNode *temp = headA;
        m[temp] = 1;
        while(temp!=NULL)
        {
            m[temp->next]++;
            temp = temp->next;
        }
        ListNode *temp2 = headB;
        ListNode *ans = NULL;
        if(m.find(headB)!=m.end())
        {
            return headB;
        }
        while(temp2!=NULL)
        {
            if(m.find(temp2->next)!=m.end())
            {
                ans = temp2->next;
                break;
            }
            temp2 = temp2->next;
        }
        return ans;
    }
};

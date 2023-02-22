//Qlink-> https://leetcode.com/problems/linked-list-cycle-ii/description/
//Code
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        unordered_map <ListNode*,int> m;
        while(fast!=NULL)
        {
            if(m.find(fast)!=m.end())
            {
                return fast;
            }
            m[fast]++;
            fast = fast->next;
        }

        return NULL;
    }
};

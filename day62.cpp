//Qlink-> https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
//Code
class Solution {
public:
    int pairSum(ListNode* head) {
        vector <int> v;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        } 
        int start = 0;
        int end = v.size()-1;
        int maxi = -1;
        while(start<end)
        {
            maxi = max(maxi,v[start]+v[end]);
            start++;
            end--;
        }

        return maxi;
    }
};

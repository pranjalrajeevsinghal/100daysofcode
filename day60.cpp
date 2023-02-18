//Qlink-> https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
//Code
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
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s="";
        ListNode *temp = head;
        while(temp!=NULL)
        {
            s = s+to_string(temp->val);
            temp = temp->next;
        }
        int ans=0;
        int count = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            ans = ans+((s[i]-'0')*pow(2,count));
            count++;
        }
        return ans;
    }
};

//Qlink-> https://leetcode.com/problems/palindrome-linked-list/description/
//Code
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        int size = 0;
        vector <int> v;
        ListNode *temp = head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int start = 0;
        int end = v.size()-1;
        while(start<end)
        {
            if(v[start]!=v[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};

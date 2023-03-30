//Qlink-> https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//Code

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL or head->next == NULL){
            return head;
        }
        ListNode * temp = head;
        ListNode * prev = new ListNode(-2);
        ListNode * head1 = prev;
        prev->next = head;
        int find = head->val;
        while(temp != NULL){
            if(temp != NULL and temp->next != NULL and temp->val == temp->next->val){
                while(temp != NULL and temp->next != NULL and temp->val == temp->next->val){
                    temp = temp->next;
                }
                prev->next = temp->next;
                temp = prev->next;
            }
            else{
                prev = prev->next;
                temp = temp->next;
                
            }
        }
        return head1->next;
    }
};


//Qlink-> https://leetcode.com/problems/prime-subtraction-operation/description/
//Code

class Solution {
public:
    bool check(int n)
    {
        if (n <= 1)
		return false;
     	if (n == 2 || n == 3)
	     	return true;
	    if (n % 2 == 0 || n % 3 == 0)
		  return false;
	    for (int i = 5; i <= sqrt(n); i = i + 6)
		   if (n % i == 0 || n % (i + 2) == 0)
			return false;
	    return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        bool fl=true;
        int n=nums.size();
        if(n==1) return true;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>=nums[i])
            {
                fl=false;
            }
        }
        if(fl)
        { 
            // when array is already in strictly increasing order.
            return true;
        }
        for(int i=nums[0]-1;i>1;i--)
        {
            if(check(i))
            {
                nums[0]-=i;
                break;
            }
        }
        for(int i=1;i<n;i++)
        {
            int k=nums[i]-nums[i-1];
            if(k<=0) return false;
            for(int j=k-1;j>1;j--)
            {
                if(check(j))
                {
                    nums[i]-=j;
                    break;
                }
            }
        }
        return true;
    }
};

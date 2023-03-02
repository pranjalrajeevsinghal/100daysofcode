//Qlink-> https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1
//Code

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *fast = head;
        Node *slow = head;
        Node *temp = head;
        bool loop = false;
        if(head==NULL && head->next==NULL && head->next->next==NULL)
        {
            return;
        }
        while((fast!=NULL) && (fast->next!=NULL))
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            {
                loop= true;
                break;
            }
        }
        
        if(loop==false)
        {
            return;
        }
        slow = head;
        // Node *start = head;
        while(fast!=slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        temp = slow;
        while(temp->next!=slow)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};

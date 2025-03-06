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

        int getLen(ListNode*  head){
        ListNode* temp=head;
        int len = 0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
         
         int len = getLen(head);
        if(head == NULL || head->next == NULL|| k>len)
        return head;

       ListNode *forward = NULL;
       ListNode *tail = NULL;
       ListNode *curr = head;
    
       int count = 0;

      while( curr != NULL && count<k )  {
          
        forward = curr->next ;
        curr -> next = tail ;
        
        tail = curr;
        curr = forward;

        count++;
       
      }
      
     

    if(forward != NULL)
    head -> next = reverseKGroup(forward ,k);

    return tail;
    }
};
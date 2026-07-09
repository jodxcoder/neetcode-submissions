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
    ListNode* reverseList(ListNode* head) {
        if(head!=nullptr){
        ListNode* curr = nullptr;
        ListNode* temp = head;
        ListNode*prev =head;
          prev=prev->next;
        temp->next=curr;
        curr=temp;
        while(prev!=nullptr){
            temp=prev;
              prev=prev->next;
            temp->next=curr;
            curr=temp;
        }

        
        return temp;
        }
        else{
            return nullptr;
        }
    }
};
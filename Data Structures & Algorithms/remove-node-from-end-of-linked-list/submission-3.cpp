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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return nullptr;
        }
        
        
        int l=0;
        ListNode*temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            l++;
        }
        if(l==n){
            head=head->next;
    
            return head;
        }
        int count1=l-n;
        ListNode*temp2=head;
        ListNode*temp3=head->next;
        int count=0;
        while(count!=count1-1 && temp2!=nullptr && temp3!=nullptr){
            temp2=temp2->next;
            temp3=temp3->next;
            count++;
        }
        temp2->next=temp3->next;
        temp3->next=nullptr;
        delete(temp3);
        return head;


        
    
        
    }
};

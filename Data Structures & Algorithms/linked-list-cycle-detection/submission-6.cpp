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
    bool hasCycle(ListNode* head) {
        // vector<int> arr(1000,0);
        // arr[head->val]=1;
        // ListNode* temp=head->next;
        // while(temp!=nullptr){
        //     if(arr[temp->val]==1){
        //         return true;
        //     }
        //     arr[temp->val]=1;
        //     temp=temp->next;
        // }
        // return false;
        if(head==nullptr){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr){
            if(slow==fast){
                return true;
            }
            slow=slow->next;
            fast=fast->next->next;

        }
        return false;


        
        
    // }
    // unordered_set<ListNode*> a;
    // if (head == nullptr) return false;

    // ListNode* temp=head;
    // a.insert(temp);
    // temp=temp->next;
    // while(temp!=nullptr){
    //     for(auto x:a){
    //         if(x==temp){
    //             return true;
    //         }
    //     }
    //     temp=temp->next;
    // }
    // return false;
    }
};

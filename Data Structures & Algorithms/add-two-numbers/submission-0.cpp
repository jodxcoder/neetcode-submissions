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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1="";  //"123"
        ListNode*temp =l1;
        while(temp!=nullptr){
            s1+=to_string(temp->val);
            temp=temp->next;
        }
          reverse(s1.begin(),s1.end());
        string s2=""; //"456"
        ListNode*temp2=l2;
        while(temp2!=nullptr){
            s2+=to_string(temp2->val);
            temp2=temp2->next;
        }
        reverse(s2.begin(),s2.end());
        int j=stoi(s1)+stoi(s2);
        ListNode* temp3=new ListNode(j%10);
        ListNode* temp4=temp3;
        while(j!=0){
            j=j/10;
            int k=j%10;
            if(j==0){
                continue;
            }
            temp4->next=new ListNode(k);
            temp4=temp4->next;
        }
        return temp3;



        
    }
};

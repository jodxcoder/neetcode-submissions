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
        string s1="",s2="";
        ListNode*temp1=l1;
        while(temp1!=nullptr){
            s1=s1+to_string(temp1->val);
            temp1=temp1->next;
           
        }  //s1="123"

        reverse(s1.begin(),s1.end());  //s1="321"
        ListNode*temp2=l2;
        
        while(temp2!=nullptr){
            s2+=to_string(temp2->val);
            temp2=temp2->next;
            
        }  //s1="456"

        reverse(s2.begin(),s2.end()); //654

        int j=stoi(s1)+stoi(s2); //321+654=975

        ListNode*h=new ListNode(j%10);
        j=j/10; //97
        ListNode*temp=h;
        while(j){
            temp->next=new ListNode(j%10);
            temp=temp->next;
            j=j/10;
        }

        //5->7->9
        return h;





       

        
    }
};

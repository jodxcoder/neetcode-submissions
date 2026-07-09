class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return;

        vector<int> re;
        ListNode* temp = head;

        while(temp != nullptr){
            re.push_back(temp->val);
            temp = temp->next;
        }

        int count = re.size();
        int n = count;

        vector<int> re2(count);
        re2[0] = re[0];

        int i = 1;
        int count2 = 1;

        while(i + 1 < count){
            re2[i] = re[n - count2];
            re2[i + 1] = re[count2];
            i += 2;
            count2++;
        }

        if(i < count){
            re2[i] = re[count2];
        }

        temp = head;
        for(int j = 0; j < count; j++){
            temp->val = re2[j];
            temp = temp->next;
        }
    }
};
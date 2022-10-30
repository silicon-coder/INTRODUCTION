ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head, *cur = head;
        while(temp){
            if(temp->val < x){
                int value = temp->val;
                ListNode* dup = cur;
                while(dup){
                    int y = dup->val;
                    dup->val = value;
                    value = y;
                    if(dup == temp) break;
                    dup=dup->next;
                }
                cur = cur->next;
            }
            temp = temp->next;
        }
        return head;
    }
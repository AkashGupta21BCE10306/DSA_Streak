class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        int pos = 0;
        Node*temp = nullptr;
        while(pos+1 < x){
            if(!temp){
                temp = head;
            }
            else{
                temp = temp->next;
            }
            pos++;
        }
        if(!temp){
            head  = head->next;
            head->prev = nullptr;
            return head;
        }
        else{
            if(temp->next){
                if(temp->next->next)temp->next->next->prev = temp;
                temp->next = temp->next->next;
            }
            else{
                temp->next = nullptr;
                temp->prev->next = nullptr;
            }
            return head;
        }
    }
};


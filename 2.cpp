/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {     
        return list_sum(l1, l2); 
    }
    
    private:     
    ListNode* list_sum(const ListNode* a, const ListNode* b)
    {
        int t_res = a->val + b->val; 
        int r=t_res/10; 
        auto root = new ListNode(t_res%10); 
        auto last = root; 
        a = a->next; 
        b = b->next; 
        
        while((a != nullptr) || (b != nullptr))
        {
            int t_a=0; 
            int t_b=0; 
            
            if(a!=nullptr)
            {
                t_a = a->val; 
                a = a->next; 
            }
            
            if(b!=nullptr)
            {
                t_b = b->val; 
                b = b->next; 
            }
            int t_res = t_a+t_b+r; 
            r = t_res/10; 
            last->next = new ListNode(t_res%10); 
            last = last->next; 
        }
        if(r>0) last->next = new ListNode(r);
        
        return root; 
    }
    
};
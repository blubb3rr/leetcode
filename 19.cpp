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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        count=count-n;
        //cout<<count<<endl;
        ptr=head;
        if(count==0 && n==1)
        {
            return NULL;
        }
        if(count==0)
        {
            head=head->next;
            return head;
        }
        if(n==1)
        {
            while(ptr->next->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=ptr->next->next;
            return head;
        }
        
        
        
        ptr=head;
        for(int i=0;i<count-1;i++)
        {
            ptr=ptr->next;
            cout<<"lol"<<endl;
        }
        ptr->next=ptr->next->next;
        return head;
        
    }
};
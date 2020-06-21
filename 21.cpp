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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head=NULL;
        ListNode *ptr=head;
        vector<int> vect;
        while(l1!=NULL)
        {
            vect.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            vect.push_back(l2->val);
            l2=l2->next;
        } 
        sort(vect.begin(),vect.end());
        for(int i=0;i<vect.size();i++)
        {
            ListNode *temp= new ListNode(vect[i]);
            if(head==NULL)
            {
                head=temp;
                ptr=head;
            }
            else
            {
                ptr->next=temp;
                ptr=ptr->next;
            }
        }
        /*
        while(l1!=NULL || l2!=NULL)
        {
            if(l1->val < l2->val)
        }
        */
        
        return head;
    }
};
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ptr,*head=NULL;
        vector<int> vect;
        for(int i=0;i<lists.size();i++)
        {
            ptr=lists[i];
            while(ptr!=NULL)
            {
                vect.push_back(ptr->val);
                ptr=ptr->next;
            }
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
        return head;
        
        
    }
};
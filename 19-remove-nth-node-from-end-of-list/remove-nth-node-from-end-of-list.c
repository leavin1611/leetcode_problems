/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int size(struct ListNode *head)
 {int i=0;
    struct ListNode *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }printf("%d",i);
    return i;
 }
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int s=size(head)-n;
    if(s==0)
    {
        return head->next;
    }
    if(head->next!=NULL)
    {int i=1;
        struct ListNode *prev=head;
        while(i< s && prev->next!=NULL)
        {
            
            prev=prev->next;
            i++;
        }
        if(prev->next!=NULL & i==s)
        {
            struct ListNode *temp=prev->next;
            prev->next=prev->next->next;
            free(temp);
        }
        
    }
    else{
           
            return head->next;
        }
    return head;
}
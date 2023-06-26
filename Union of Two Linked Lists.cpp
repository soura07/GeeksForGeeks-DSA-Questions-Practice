class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        map<int,int>mp;
        Node* p1=head1,*p2=head1;
        while(p1->next!=NULL){
            mp[p1->data]++;
            p1=p1->next;
        }
        p1->next=head2;
        while(p1!=NULL){
            mp[p1->data]++;
            p1=p1->next;
        }
        int cnt=mp.size();
        for(auto it:mp){
            p2->data=it.first;
            cnt--;
            if(cnt)p2=p2->next;
        }
        p2->next=NULL;
        return head1;
    }
};

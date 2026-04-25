#include<stdlib.h>
#include<stdio.h>
struct ListNode {
      int val;
      struct ListNode *next;
  };

struct ListNode* new_element(int value)
{
    struct ListNode* new;
    new = malloc(sizeof(struct ListNode*));
    new->val=value;
    return new;
}
void addlst_back(struct ListNode** lst,struct ListNode*new)
{
    if(!(*lst))
    {
        *lst=new;
        return;
    }
    struct ListNode* curent;
    curent=*lst;
    while(curent->next)
        curent=curent->next;
    curent->next=new;
}
struct ListNode* create_list(int *a,int size)
{
	int i;
	i=0;
	struct ListNode* new;
	struct ListNode* re=NULL;
	while(i<size)
	{
		new=new_element(a[i++]);
		addlst_back(&re,new);
	}
	return re;
}
void print_list(struct ListNode* lst)
{
	while(lst)
	{
		printf("%d   ",lst->val);
		lst=lst->next;
	}
	printf(" |||  \n");
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

       struct ListNode* res=NULL;
       struct ListNode* new;
       int rest=0;
       int val=0;
       int sum=0;
       while(l1 || l2)
       {
            sum=rest;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            rest=sum/10;
            val=sum%10;
            new=new_element(val);
            addlst_back(&res,new);
       }
       if(rest)
        {
            new=new_element(rest);
            addlst_back(&res,new);
        }
        return res;
}
int main (void)
{
	int A[]={1};
	int B[]={9,9,9,9,9,9,9};
	struct ListNode* la;
	struct ListNode* lb;
	struct ListNode* ls;
	la=create_list(A,1);
	lb=create_list(B,7);
	print_list(la);
	print_list(lb);
	ls=addTwoNumbers(la,lb);
	print_list(ls);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *olusturma(int n)
{
    node *p,*head;
    int i;

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
        }
        else
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
        printf("datayi giriniz: ");
        scanf("%d",&p->data);

    }
    p->next=NULL;
    return head;

}
int my_strlen(node *head)
{
    node *p;
    int count=0;
    p=head;

    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
node *sil(node *head,int c)
{
    node *p,*q;
    p=head;
    int count=1;
    while(p->next!=NULL && count!=(c/2)+1)
    {
        q=p;
        p=p->next;
        count++;
    }
    q->next=p->next;
    free(p);
    return head;
}

int main2()
{
    int n,c;
    node *head,*p;
    printf("kac elemanli olsun : ");
    scanf("%d",&n);
    head=olusturma(n);
    c=my_strlen(head);
    head=sil(head,c);
    p=head;
    for(int i=0; i<n; i++)
    {
        printf("%d\n",p->data);
        p=p->next;

    }


    return 0;
}

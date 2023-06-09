#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int no;
    struct node *next;
};
typedef struct node node;

void listele(node *head)
{
    node *p;
    p=head;
    while(p->next!=NULL)
    {
        printf("%d\n",p->no);
        p=p->next;

    }

}

node *basa_al(node *head)
{
    node *p,*q;
    p=head;

    while(p->next->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    p->next=head;
    head=p;
    p=q;
    p->next->next=NULL;
    return head;
}

node *swap(node *head)
{
    node *p,*q,*k;

    p=head;
    while(p->next->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    k=head->next;
    q->next=head;
    head->next=p->next;
    p->next=k;
    head=p;

    return head;

}
int main()
{
    node *head,*p,*q;

    head=(node*)malloc(sizeof(node));
    p=head;
    printf("ilk listeyi olusturunuz: ");
    scanf("%d",&p->no);

    while(1)
    {
        if(p->no==-1)
        {
            p->next=NULL;
            break;
        }
        else
        {

            p->next=(node*)malloc(sizeof(node));
            q=p;
            p=p->next;
            printf("degerini giriniz :");
            scanf("%d",&p->no);
            if(p->no%2==1)
            {
                p->next=head;
                head=p;
                p=q;
            }

        }

    }
    p->next=NULL;
    // listele(head);
    // head=basa_al(head);
    // listele(head);
    head=swap(head);
    listele(head);
    return 0;
}

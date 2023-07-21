#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*head,*prev, *cur,*new,*tail,*temp,*next;
void create()
{
  int value;
     new=(struct node*)malloc(sizeof(struct node));
     printf("Enter the mark to be inserted:");
     scanf("%d",&value);
     new->data=value;
     new->next=NULL;
     if(head==NULL)
     {
         head=new;
         tail=new;
     }
     else
     {
         tail->next=new;
         tail=new;
     }

}
void reverse()
{
    if(head != NULL)
    {

        prev = NULL;
        cur = head;
        while(cur != NULL)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
    }
}
void display()
{
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("\n%d", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int n;
    printf("Enter the total number of marks: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {create(n);}
    printf("\nMarks in the list is:");
    display();
    reverse();
    printf("\nReversed mark list is:");
    display();
    return 0;
}

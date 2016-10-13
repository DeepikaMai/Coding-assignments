#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct st
{
    char c;
    struct st *next,*prev;
}*head=NULL;
void main()
{
    int n;
    scanf("%d",&n);
    struct st *new_node,*current;
    for(int i=0;i<=n;i++){
            new_node=(struct st *)malloc(sizeof(struct st));
    scanf("%c",&new_node->c);
    new_node->next=NULL;
    new_node->prev=NULL;
        if(head==NULL){
            head=new_node;
            current=new_node;
        }
        else
        {
            new_node->prev=current;
            current->next=new_node;
            current=new_node;
            current->next=NULL;
        }
    }
    printf("\nSTRING IS:");
    current=head;
    while(current->next!=NULL){
        printf("%c",current->c);
        current=current->next;
    }
    printf("%c",current->c);
    printf("\n\nREVERSED STRING IS:\n");
    while(current->prev!=NULL){
        printf("%c",current->c);
        current=current->prev;
    }
    printf("%c",current->c);
}

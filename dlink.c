#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int num;
    struct node *next;
    struct node *prior;
};

typedef struct node * d_link; 

void create_dlink(d_link *head)
{
    *head = (d_link)malloc(sizeof(struct node));
    (*head)->num = -1;
    (*head)->next = *head;
    (*head)->prior = *head;
}


void insert_head_dlink(d_link *head, d_link newnode)
{
    d_link temp = *head;

    newnode->next = temp->next;
    (temp->next)->prior = newnode;

    newnode->prior = temp;
    (*head)->next = newnode;
}
    

void insert_tail_dlink(d_link *head, d_link newnode)
{
    d_link temp = *head;
    
    while(temp->next != *head)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prior = temp;

    newnode->next = *head;
    (*head)->prior = newnode;

}

int delete_dlink(d_link *head, int num)
{
    d_link temp = (*head)->next;
    
    while(temp != *head)
    {
        if(temp->num == num)
	{
	    temp->prior->next = temp->next;
	    temp->next->prior = temp->prior;
	    return 0;
	}

	temp = temp->next;
    }
}

void display_dlink(d_link *head)
{
    d_link temp = (*head)->next;

    while(temp != *head)
    {
        printf("%d ",temp->num);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    d_link head;
    d_link newnode;
    
    create_dlink(&head); 
    
    int i;
    for(i = 0; i < 10; i++)
    {
        newnode = (d_link)malloc(sizeof(struct node));

	newnode->num = i + 1;

	//insert_tail_dlink(&head)
	insert_head_dlink(&head,newnode);
    }

    delete_dlink(&head,1);
    display_dlink(&head);

    return 0;
}


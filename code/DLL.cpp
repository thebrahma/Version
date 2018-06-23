#include<bits/stdc++.h>


struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void createnode(struct Node** head,int data)
{
	struct Node *node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
	node->prev = NULL;
	if(*head == NULL)
	{
          (*head) = node;
	}
	else
	{
		node->next = (*head);
		(*head)->prev = node;
        (*head) = node;
	}
}

int main()
{
	struct Node *head = NULL;
    for(int i=0;i<5;i++)
    {
    	createnode(&head,i);
    }

    struct Node *temp=head;
    while(temp->next!=NULL)
    {
    	printf("%d\n",temp->data);
    	temp = temp->next;
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

void createnode(struct Node **head,int data)
{
	struct Node *node = (struct Node *)malloc(sizeof(struct Node));
	struct Node *temp = *head;
	node->data = data;
	node->next = *head;
	if(*head == NULL)
	{
		node->next = node;
	}
	else
	{
		while(temp->next != *head)
			temp = temp->next;
        temp->next = node;
	}
	*head = node;
}


void split(struct Node *head,struct Node **head1,struct Node **head2)
{
      struct Node *temp = head;
      while()
}


int main()
{
	struct Node *head=NULL;
	for(int i = 0;i<5;i++)
	{
          createnode(&head,i);
	}
    
    struct Node *temp = head;
    printf("%d %d\n",head->data,temp->data );
    do
    {
    	printf("%d", temp->data );
    	temp = temp->next;
    	
    }
    while(temp!=head);
        /* split in two halves */
  		split(head,&head1,&head2);




	return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
void createnode(struct Node **head,int data)
{
       struct Node *node=(struct Node*)malloc(sizeof(struct Node));
       node->data = data;
       node->next = *head;
       *head = node;
}

void insertnode(struct Node **node,int data)
{
	struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = data;
     newnode->next = (*node)->next;
     (*node)->next = newnode;
}
int main()
{
	struct Node *head=NULL;
	for(int i=0;i<5;i++)
	{
		createnode(&head,i);
	}

     int value=10;
     while(node!=NULL)
     {
     	if(node->data==3)
     	{
               insertnode(head,value);
               break;
     	}
     	node=node->next;
     }


          while(head!=NULL)
          {
          	printf("%d",head->data);
          	head=head->next;
          }
	return 0;
}
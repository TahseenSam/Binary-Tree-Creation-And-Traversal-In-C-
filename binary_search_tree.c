#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* right;
	struct node* left;
};
void Inorder(struct node* root)
{
	if(root==NULL)
	{	return; }
	Inorder(root->left);
	printf("%d ",root->data);
	Inorder(root->right);
}
void Postorder(struct node* root)		// LRN
{
	if(root==NULL)
		return;
	Postorder(root->left);
	Postorder(root->right);
	printf("%d ",root->data);
}
void Preorder(struct node* root)	//NLR
{
	if(root==NULL)
		return;
	printf("%d ",root->data);
	Preorder(root->left);
	Preorder(root->right);
}
void main()
{
	struct node *p,*q,*root;
	int i,item,n;
	printf("Enter Number Of Nodes :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter Data  for %d node :",i+1);
		scanf("%d",&item);
		p->data=item;
		p->left=NULL;
		p->right=NULL;
		if(i==0)
			root=p;
		else
		{
			q=root;
			while(1)
			{
				if(p->data>q->data)
				{
					if(q->right==NULL)
					{
						q->right=p;
						break;
					}
					else
					{
						q=q->right;	
					}		
				}
				else
				{
					if(q->left==NULL)
					{
						q->left=p;
						break;
					}
					else
					{
						q=q->left;
					}
				}
			}
		}
	}
	printf("\nTree Successfully Created");
	getch();
	printf("\nTree Traversing..!!");
	printf("\nInorder Traversing\n");
	Inorder(root);
	printf("\nPost Order Traversing\n");
	Postorder(root);
	printf("\nPre-Order Traversing\n");
	Preorder(root);
	getch();
}

#include<stdio.h>
#include<limits.h>
 
/* A tree node structure */
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 
 
struct node* newNode (int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int mx(int a,int b){
	return a>b?a:b;
}

void leftview(struct node *root,int v,int *mx){
	if(root==NULL)
	return;
	if(*mx<v){
		*mx=v;
		printf("%d\n",root->data);
	}

	leftview(root->left,v+1,mx);
	leftview(root->right,v+1,mx);
}


int main()
{
    struct node *root = NULL;
 
    /* Constructing tree given in the above figure */
    root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(-7);
    root->right->left = newNode(11);
    root->left->left = newNode(8);
     root->left->left->left=newNode(0);
    root->left->right = newNode(14);
 root->left->right->left=newNode(4);
 int mx=0;
    leftview(root,1,&mx);
 
    getchar();
    return 0;
}

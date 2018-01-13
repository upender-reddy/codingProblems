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

int maxSumPath(struct node *root){
	if(root==NULL)
	return 0;

	return mx(maxSumPath(root->left),maxSumPath(root->right))+root->data;
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
    root->left->right = newNode(14);
 root->left->right->left=newNode(4);
    int sum = maxSumPath(root);
    printf ("\nMax Sum of the nodes is %d ", sum);
 
    getchar();
    return 0;
}

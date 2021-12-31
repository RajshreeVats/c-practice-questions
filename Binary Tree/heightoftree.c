#include <stdio.h>
#include <stdlib.h>
 

struct node {
    int data;
    struct node* left;
    struct node* right;
};

int count(struct node* node)
{
   if(node)
   return count(node->left)+count(node->right)+1;
   return 0;
}
int height(struct node* node)
{
    int x=0,y=0;
    if(node==0)
    return 0;
    x=height(node->left);
    y=height(node->right);
    if(x>y)
    return x+1;
    else
    return y+1;
}

struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
int main()
{
    struct node* root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    printf("Height of tree is %d", height(root));
    printf("Count of nodes is %d", count(root));
 
    getchar();
    return 0;
}
//wap in c to find the no of internal nodes in a tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int internal(struct node *root)
{
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 0;

    return 1 + internal(root->left) + internal(root->right);
}

int main()
{
    struct node *root;

    root = (struct node*)malloc(sizeof(struct node));
    root->data = 1;

    root->left = (struct node*)malloc(sizeof(struct node));
    root->left->data = 2;

    root->right = (struct node*)malloc(sizeof(struct node));
    root->right->data = 3;

    root->left->left = NULL;
    root->left->right = NULL;
    root->right->left = NULL;
    root->right->right = NULL;

    printf("Number of internal nodes = %d", internal(root));

    return 0;
}
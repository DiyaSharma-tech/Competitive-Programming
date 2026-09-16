//Height of a tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int height(struct node *root)
{
    if(root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    if(left > right)
        return left + 1;
    else
        return right + 1;
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

    printf("Height of tree = %d", height(root));

    return 0;
}
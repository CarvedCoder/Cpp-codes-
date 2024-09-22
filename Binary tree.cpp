#include <iostream>
struct node{
    int data;
    node* left,*right;
    node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void in_order_traversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order_traversal(root->left);
    std::cout<< root->data <<"->";
    in_order_traversal(root->right);
}

void pre_order_traversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    std::cout<< root->data <<"->";
    pre_order_traversal(root->left);
    pre_order_traversal(root->right);
}

void post_order_traversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    post_order_traversal(root->left);
    post_order_traversal(root->right);
    std::cout<< root->data <<"->";
}

int main(void){
    struct node*root = new node(1);
    root->left = new node(2);
    root -> right = new node (3);

    in_order_traversal(root);
}
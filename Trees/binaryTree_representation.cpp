// Implementation of a basic binary tree structure in C++ with manual node creation and linking.

#include <iostream>
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *createNode(int x)
{
    Node *n = new Node;
    n->data = x;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    Node *p = createNode(7);
    Node *p1 = createNode(11);
    Node *p2 = createNode(4);

    p->left = p1;
    p->right = p2;
    return 0;
}

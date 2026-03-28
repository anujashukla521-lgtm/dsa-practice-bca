// Demonstrates binary tree creation and depth-first traversals (preorder, inorder, postorder) in C++.

#include <iostream>
using namespace std;

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
void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main()
{
    Node *p = createNode(7);
    Node *p1 = createNode(11);
    Node *p2 = createNode(4);
    Node *p3 = createNode(9);
    Node *p4 = createNode(13);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p2->right = p4;

    preorder(p);
    cout << endl;
    postorder(p);
    cout << endl;
    inorder(p);
    return 0;
}

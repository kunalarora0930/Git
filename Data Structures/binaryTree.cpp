#include <iostream>
using namespace std;

class Node
{
public:
    int  data;
    Node *left;
    Node *right;
    Node(int x)
    {
        left = NULL;
        right = NULL;
        data = x;
    }
};

int main()
{
    Node *root = new Node(1);

    root->left = new Node(82);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(69);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);


    return 0;
}

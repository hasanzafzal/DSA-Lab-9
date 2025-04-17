#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() 
{
    BinaryTree tree;
    tree.root = new Node(5);
    tree.root->left = new Node(4);
    tree.root->right = new Node(3);
    tree.root->left->left = new Node(2);
    tree.root->left->right = new Node(1);
    cout << "Preorder Traversal: ";
    tree.preorder(tree.root);
    cout << endl;
    cout << "Inorder Traversal: ";
    tree.inorder(tree.root);
    cout << endl;
    cout << "Postorder Traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    return 0;
}
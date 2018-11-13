#include <iostream>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
};
struct node *root=NULL;
class tree
{
public:
    
    node *createnode(int);
    node *insert_node(node *,int);
    int inorder(node *);
    int printPostorder(node *);
    int printPreorder(node *);
    node *deleteNode(node *,int);
    node *minValueNode(node *);
};
node *tree::minValueNode(node* node)
{
    struct node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}


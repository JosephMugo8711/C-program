
// recursive code for searching binanry tree
// The tree is a nonlinear hierarchical data structure and comprises a collection of entities known as nodes. 
//It connects each node in the tree data structure using "edges”, both directed and undirected
bool search(node *tree, int number)
{
    if (tree == NULL)

    {
        return false;
    }
    else if (number < tree->number)
    {
        // search in the first half
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
         // search in the other half
        return search(tree->right, number);
    }
    else 
    {
        return true;
    }
}
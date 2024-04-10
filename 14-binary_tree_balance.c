#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: the balance.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    size_t left, right;

    if (tree == NULL)
        return (0);

    left = binary_tree_balance(tree->left);
    right = binary_tree_balance(tree->right);

    return (int)(left - right);
}

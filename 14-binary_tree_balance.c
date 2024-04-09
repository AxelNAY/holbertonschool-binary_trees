#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: the balance.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return (int)(left - right);
}


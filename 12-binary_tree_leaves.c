#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: the count.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count++;

	return (count);
}

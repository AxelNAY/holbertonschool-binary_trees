#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: 1 if perfect or 0 if not and if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);

	return (0);
}


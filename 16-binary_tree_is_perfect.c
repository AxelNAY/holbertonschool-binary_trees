#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "15-binary_tree_is_full.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: 1 if perfect or 0 if not and if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (binary_tree_height(tree->left) > 2 && binary_tree_height(tree->right) > 2)
		return (0);

	if (binary_tree_is_full(tree) != 0)
		return (1);

	return (0);
}

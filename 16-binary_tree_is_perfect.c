#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to traverse.
 * Return: 1 if perfect or 0 if not and if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	if (height1 > height2)
		return (height1 + 1);
	else
		return (height2 + 1);
}

/**
 * binary_tree_is_perfect - function that if binary tree is perfect
 * @tree: pointer to the node
 * Return:  1 if perfect or 0 if not and if tree is NULL.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if ((tree->left == NULL && tree->right == NULL) ||
				(binary_tree_is_perfect(tree->left) &&
				 binary_tree_is_perfect(tree->right)))
		{
			return (1);
		}
	}
	return (0);
}

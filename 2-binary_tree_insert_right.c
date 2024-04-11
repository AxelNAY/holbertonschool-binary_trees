#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node
 * as the right-child of another node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *replace_right_node;

if (parent == NULL)
return (NULL);

replace_right_node = binary_tree_node(parent, value);

if (replace_right_node == NULL)
return (NULL);

if (parent->right != NULL)
{
	replace_right_node->right = parent->right;
	parent->right->parent = replace_right_node;
}
parent->right = replace_right_node;

return (replace_right_node);
}

#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling children.
 *
 * Return: A pointer to the sibling node, or NULL if there is no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If the node is the left child, return the right child */
	if (node == node->parent->left)
		return (node->parent->right);

	/* If the node is the right child, return the left child */
	if (node == node->parent->right)
		return (node->parent->left);

	return (NULL);
}

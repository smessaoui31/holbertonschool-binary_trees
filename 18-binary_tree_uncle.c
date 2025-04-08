#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return: pointer to the uncle node, NULL if node is NULL or node as no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int isParentLeftChild;

	if (node == NULL)
	{
		return (NULL);
	}

	if (node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent == NULL)
	{
		return (NULL);
	}

	isParentLeftChild = (node->parent->parent->left == node->parent);

	if (isParentLeftChild)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}

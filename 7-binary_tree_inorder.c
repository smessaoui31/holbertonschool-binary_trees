#include "binary_trees.h"
/**
 * binary_tree_inorder - Traverses a binary tree in in-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node's value
 *
 * Return: None
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}


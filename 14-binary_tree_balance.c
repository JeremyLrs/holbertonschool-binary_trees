#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *
 * @tree: is a pointer to the root node
 * of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = 1 + (binary_tree_height(tree->left));

	else
		left = 0;

	if (tree->right != NULL)
		right = 1 + (binary_tree_height(tree->right));
	else
		right = 0;

	if (left > right)
		return (left);
	else
		return (right);
}

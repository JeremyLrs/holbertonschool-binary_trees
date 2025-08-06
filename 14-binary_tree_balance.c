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
	int heightLeft = 0;
	int heightRight = 0;

	if (tree != NULL)
	{
		/* Measuring the height of each child */
		heightLeft = binary_tree_height(tree->left);
		heightRight = binary_tree_height(tree->right);

		if (tree->left == NULL)
			heightLeft = -1;

		if (tree->right == NULL)
			heightRight = -1;
	}

	/* Returning the difference of heights */
	return (heightLeft - heightRight);
}

#include "binary_trees.h"
#include "9-binary_tree_height.c"

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
	int height_left = 0, height_right = 0;

	if (tree)
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (!tree->left)
			height_left = -1;

		if (!tree->right)
			height_right = -1;
	}
	return (height_left - height_right);
}

#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 *
 * @tree: is a pointer to the root
 * node of the tree to check
 *
 * Return: If tree is NULL
 * your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, left_perfect, right_perfect;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		left_perfect = binary_tree_is_perfect(tree->left);
		right_perfect = binary_tree_is_perfect(tree->right);

		return (left_perfect && right_perfect);
	}
	return (0);
}

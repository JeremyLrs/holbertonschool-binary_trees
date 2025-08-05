#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks to see if a tree is full
 * @tree: tree to measure
 * Return: 1 if full, 0 if not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /*L'arbre est vide*/
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1); /*C'est une feuille*/
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0); /*Un enfant est manquant*/
	}

	/*Vérifiez récursivement pour les deux enfants*/
	if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
	{
		return (1); /*Les deux sous-arbres sont pleins*/
	}

	return (0); /*Aucune des conditions ci-dessus n'est remplie*/
}

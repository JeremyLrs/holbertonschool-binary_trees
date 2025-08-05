#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: tree to measure
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*On retourne 0 si le nœud n'existe pas ou s'il n'a pas d'enfant*/
	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	/*C'est l'étape récursive*/
	/*Si le nœud a au moins un enfant, on le compte (le "+ 1")*/
	/*et on additionne les résultats de ses sous-arbres gauche et droit*/
	return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}

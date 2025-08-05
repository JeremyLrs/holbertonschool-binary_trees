#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaf nodes
 * @tree: tree to measure
 * Return: number of leaf nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*Si le nœud n'existe pas, il n'y a pas de feuilles.*/
	if (tree == NULL)
	{
		return (0);
	}

	/*Si le nœud n'a ni enfant gauche ni enfant droit, c'est une feuille.*/
	/*On retourne 1 pour la compter*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/*Appel récursif*/
	/*Si le nœud n'est pas une feuille, on additionne le nombre de feuilles*/
	/*de son sous-arbre gauche et de son sous-arbre droit*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}

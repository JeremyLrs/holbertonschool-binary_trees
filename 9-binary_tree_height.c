#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: Tree to measure
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Déclaration des variables pour stocker les hauteurs des sous-arbres g&d*/
	size_t left_height, right_height;

	/*Si l'arbre est NULL ou s'il s'agit d'une feuille, la hauteur est 0*/
	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	/*Appel récursif pour le sous-arbre gauche. +1 pour le nœud courant*/
	left_height = binary_tree_height(tree->left) + 1;
	/*Appel récursif pour le sous-arbre droit. +1 pour le nœud courant*/
	right_height = binary_tree_height(tree->right) + 1;

	/*Comparaison des hauteurs des deux sous-arbres*/
	/*But: trouver la hauteur la + élevée pour déterminer la hauteur totale*/
	if (left_height > right_height)
	{
		/*Si la hauteur gauche est supérieure, on la retourne*/
		return (right_height);
	}

	else
	{
		/*Retourne la hauteur droite (ou la hauteur gauche si elles sont égales)*/
		return (left_height);
	}
}

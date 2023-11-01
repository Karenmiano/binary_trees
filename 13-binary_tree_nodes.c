#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of internal nodes
 * @tree: root node of tree
 * Return: number of internal nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parents = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		parents += 1;

	parents += binary_tree_nodes(tree->left);
	parents += binary_tree_nodes(tree->right);
	return (parents);
}

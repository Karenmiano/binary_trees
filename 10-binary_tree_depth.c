#include "binary_trees.h"
/**
 * binary_tree_depth - calculates depth of a node
 * @tree: node to be checked
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	d = 1;
	d += binary_tree_depth(tree->parent);
	return (d);
}

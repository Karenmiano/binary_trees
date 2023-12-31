#include "binary_trees.h"
/**
 * binary_tree_height - calculates height of tree
 * @tree: root node of tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left, right;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (left > right ? left : right);
	}
	return (0);
}

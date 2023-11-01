#include "binary_trees.h"
/**
 * binary_tree_height - calculates height of tree
 * @tree: root node of tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
		h += 1;
	else
		return (h);

	if (binary_tree_height(tree->left) || binary_tree_height(tree->right))
		h += 1;

	return (h);
}

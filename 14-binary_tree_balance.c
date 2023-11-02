#include "binary_trees.h"
/**
 * binary_tree_balance - gets balance factor of a tree
 * @tree: root node of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (height(tree->left) - height(tree->right));

	return (0);
}
/**
 * height - calculates height of binary tree
 * @tree: root node of tree
 * Return: the height
 */
int height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left, right;

		left = tree->left ? 1 + height(tree->left) : 1;
		right = tree->right ? 1 + height(tree->right) : 1;

		return (left > right ? left : right);
	}
	return (0);
}

#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = height(tree);
	size_t leaves = binary_tree_leaves(tree);

	if (power(2, height) == leaves)
		return (1);
	return (0);
}
/**
 * height - calculates height of binary tree
 * @tree: root node of tree
 * Return: the height
 */
size_t height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left, right;

		left = tree->left ? 1 + height(tree->left) : 1;
		right = tree->right ? 1 + height(tree->right) : 1;

		return (left > right ? left : right);
	}
	return (0);
}
/**
 * binary_tree_leaves - gets number of leaves in a binary tree
 * @tree: root node of binary tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		leaves += 1;

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
/**
 * power - calculates base raised to power
 * @x: base
 * @y: exponent
 * Return: the result
 */
size_t power(size_t x, size_t y)
{
	size_t result = 1;

	while (y)
	{
		result *= x;
		y--;
	}
	return (result);
}

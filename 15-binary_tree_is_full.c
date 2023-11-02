#include "binary_trees.h"
/**
 * binary_tree_is_full - checks for full binary tree
 * @tree: root node of tree
 * Return: 1 if tree is full binary 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_nodes(tree) + 1 == binary_tree_leaves(tree))
		return (1);
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

#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder -  visits nodes of a tree using inorder traversal
 * @tree: root node of tree
 * @func: function to call on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

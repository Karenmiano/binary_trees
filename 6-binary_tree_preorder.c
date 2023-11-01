#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - visits nodes of tree using preorder traversal
 * @tree: root node of tree
 * @func: function to be called on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - checks if node is a root
 * @node: address node to check
 * Return: 1 if root 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

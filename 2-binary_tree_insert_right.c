#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a new node to the right of parent node
 * @parent: parent node
 * @value: data to be held by new node
 * Return: pointer to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}

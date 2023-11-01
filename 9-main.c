#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 10);

    size_t height = binary_tree_height(root);

    printf("Height of the tree: %lu\n", height);

    return (0);
}


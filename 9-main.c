#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t height;

    root = NULL;
    binary_tree_print(root);

    height = binary_tree_height(root);
    printf("Height is %lu\n", height);
}

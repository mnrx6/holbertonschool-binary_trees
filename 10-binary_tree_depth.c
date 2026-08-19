#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure
 *
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_root(tree))
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h;
	int right_h;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_h = binary_tree_height(tree->left) + 1;
	else
		left_h = 0;

	if (tree->right != NULL)
		right_h = binary_tree_height(tree->right) + 1;
	else
		right_h = 0;

	return (left_h - right_h);
}

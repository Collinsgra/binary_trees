#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 *
 * @parent: - parent pointer
 * @value: - value added
 * Return: returns new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *node_nw;

	node_nw = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node_nw == NULL)
	{
		return (NULL);
	}


	node_nw->parent = parent;
	node_nw->n = value;
	node_nw->left = NULL;
	node_nw->right = NULL;


	return (node_nw);
}

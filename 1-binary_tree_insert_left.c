#include "binary_trees.h"

/**
 * binary_tree_insert_left -  left
 *
 * @parent: pointer to parent
 * @value:  adds valie
 *
 * Return: returns _neew node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *_neew;

	if (!parent)
		return (NULL);

	_neew = malloc(sizeof(binary_tree_t));
	if (!_neew)
		return (NULL);

	_neew->n = value;
	_neew->parent = parent;
	_neew->right = NULL;
	_neew->left = parent->left;
	parent->left = _neew;
	if (_neew->left)
		_neew->left->parent = _neew;
	return (_neew);
}

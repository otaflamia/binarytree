#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct treenode
{
    char *value;
    struct treenode *left, *right;
} treenode;

treenode *tree_new_node(const char *val);
int tree_height(treenode *root);
void tree_free(treenode *root);
void play_game(treenode *node);

#endif

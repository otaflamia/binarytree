#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "binarytree.h"

// Implementação da strdup para evitar warnings
char *my_strdup(const char *s) {
    if (s == NULL) return NULL;
    size_t len = strlen(s);
    char *dup = malloc(len + 1);
    if (dup) {
        strcpy(dup, s);
    }
    return dup;
}

treenode *tree_new_node(const char *val)
{
    treenode *p = malloc(sizeof(treenode));
    p->value = my_strdup(val);
    p->left = p->right = NULL;
    return p;
}

int tree_height(treenode *root)
{
    if (root == NULL)
        return 0;
    int alte = tree_height(root->left);
    int altd = tree_height(root->right);
    return (alte > altd ? alte : altd) + 1;
}

void tree_free(treenode *root)
{
    if (root == NULL)
        return;

    tree_free(root->left);
    tree_free(root->right);
    free(root->value);
    free(root);
}

void play_game(treenode *node)
{
    if (node == NULL)
        return;

    // Se for folha (sem filhos), mostra resposta final, sem pedir S/N
    if (node->left == NULL && node->right == NULL)
    {
        printf("Resposta final: %s\n", node->value);
        return;
    }

    // Se tem pelo menos um filho, aí pede S/N
    char resposta;
    do
    {
        printf("%s (S/N)? ", node->value);
        resposta = getchar();
        while (getchar() != '\n');
        resposta = toupper(resposta);
    } while (resposta != 'S' && resposta != 'N');

    if (resposta == 'S')
        play_game(node->left);
    else
        play_game(node->right);
}

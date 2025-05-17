#include <stdio.h>
#include "binarytree.h"

int main()
{
    treenode *root = tree_new_node("Você já estudou banco de dados relacionais?");

    root->left = tree_new_node("Você entende o conceito de tabela?");
    root->right = tree_new_node("Comece pelos conceitos básicos de banco de dados relacionais.");

    root->left->left = tree_new_node("Sabe o que são colunas e linhas?");
    root->left->right = tree_new_node("Estude os conceitos básicos de tabelas e seus elementos.");

    root->left->left->left = tree_new_node("Sabe o que é chave primária?");
    root->left->left->right = tree_new_node("Estude o que são colunas e linhas em uma tabela.");

    root->left->left->left->left = tree_new_node("Use chave primária para identificar registros únicos.");
    root->left->left->left->right = tree_new_node("Estude o conceito de integridade de dados.");

    root->left->left->right->left = tree_new_node("Use chave estrangeira para relacionar tabelas.");
    root->left->left->right->right = tree_new_node("Estude relacionamentos entre tabelas.");

    root->left->right->left = tree_new_node("Você já estudou comandos de consulta?");
    root->left->right->right = tree_new_node("Revise os comandos básicos de consulta.");

    root->left->right->left->left = tree_new_node("Você conhece o SELECT?");
    root->left->right->left->right = tree_new_node("Estude os comandos SELECT.");

    root->left->right->left->left->left = tree_new_node("Sabe usar WHERE para filtrar dados?");
    root->left->right->left->left->right = tree_new_node("Estude a cláusula WHERE em SQL.");

    root->left->right->left->left->left->left = tree_new_node("Parabéns, se você chegou até aqui já conhece o básico de SQL e já domina o SELECT com WHERE para filtrar resultados.");
    root->left->right->left->left->left->right = tree_new_node("Revise filtros com WHERE.");

    root->left->right->left->right->left = tree_new_node("Use ORDER BY para exibir dados organizados.");
    root->left->right->left->right->right = tree_new_node("Estude a sintaxe de ORDER BY.");

    play_game(root);
    tree_free(root);
    return 0;
}

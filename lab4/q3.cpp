/*
 * =====================================================================================
 *
 *       Filename:  q3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/05/2016 16:22:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
struct TreeNode {
    char name;
    struct TreeNode *left, *right;
};
typedef struct TreeNode node;
void travel(node * root) {
    if (root->left)
        travel(root->left);
    putchar(root->name);
    if (root->right)
        travel(root->right);
    return;
}
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        getchar();
        node * root = (node *)malloc(sizeof(node));
        root->name = 'A';
        root->left = NULL;
        root->right = NULL;
        char s[30];
        for (int i = 0; i < n; ++i) {
            gets(s);
            node * current = root;
            for (int j = 0; j < strlen(s); j += 2) {
                node * p;
                if (s[j] == '+') {
                    if (!current->left) {
                        p = (node *)malloc(sizeof(node));
                        current->left = p;
                        p->name = s[j + 1];
                        p->left = NULL;
                        p->right = NULL;
                    }
                    current = current->left;
                } else if (s[j] == '-') {
                    if (!current->right) {
                        p = (node *)malloc(sizeof(node));
                        current->right = p;
                        p->name = s[j + 1];
                        p->left = NULL;
                        p->right = NULL;
                    }
                    current = current->right;
                }
            }
        }
        travel(root);
        cout << endl;
    }
    return 0;
}


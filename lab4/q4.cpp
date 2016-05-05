/*
 * =====================================================================================
 *
 *       Filename:  q4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/05/2016 18:49:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <iostream>
#include <cstring>
#define NUM 2050
using namespace std;
int tree[NUM];
int output;
void delete_tree(int k) {
    if (tree[k]) {
        tree[k] = 0;
        if (tree[2 * k])
            delete_tree(2 * k);
        if (tree[2 * k + 1])
            delete_tree(2 * k + 1);
    }
}
void print(int x) {
    if (output) {
        cout << " ";
    }
    cout << x;
    output = 1;
}
void post_travel(int k) {
    if (tree[k]) {
        if (tree[2 * k])
            post_travel(2 * k);
        if (tree[2 * k + 1])
            post_travel(2 * k + 1);
        print(k);
    }
}
void mid_travel(int k) {
    if (tree[k]) {
        if (tree[2 * k])
            mid_travel(2 * k);
        print(k);
        if (tree[2 * k + 1])
            mid_travel(2 * k + 1);
    }
}
void pre_travel(int k) {
    if (tree[k]) {
        print(k);
        if (tree[2 * k])
            pre_travel(2 * k);
        if (tree[2 * k + 1])
            pre_travel(2 * k + 1);
    }
}
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        memset(tree, 0, sizeof(tree));
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
            tree[i] = 1;
        int m;
        cin >> m;
        for (int i = 0; i < m; ++i) {
            int k;
            cin >> k;
            delete_tree(k);
        }
        output = 0;
        pre_travel(1);
        cout << endl;
        output = 0;
        mid_travel(1);
        cout << endl;
        output = 0;
        post_travel(1);
        cout << endl;
    }
    return 0;
}


/*
 * =====================================================================================
 *
 *       Filename:  q1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/05/2016 14:09:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int tree[11][2] = {0};
int depth(int k) {
    if (k == -1)
        return 0;
    if (tree[k][0] == -1 && tree[k][1] == -1) {
        return 1;
    } else {
        return 1 + max(depth(tree[k][0]), depth(tree[k][1]));
    }
}
int main(void) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> tree[i][0] >> tree[i][1];
    }
    cout << depth(1) << endl;
    return 0;
}

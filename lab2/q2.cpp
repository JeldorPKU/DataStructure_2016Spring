/*
 * =====================================================================================
 *
 *       Filename:  q2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 20:34:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>
using namespace std;
int n, p, q;
int a[10], v[10];
void dfs(int m) {
    if (m == n) {
        if (1) {
        //if (a[p - 1] % a[q - 1] == 0) {
            cout << a[0];
            for (int i = 1; i < n; ++i) {
                cout << ' ' << a[i];
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (!v[i]) {
                v[i] = 1;
                a[m] = i + 1;
                dfs(m + 1);
                v[i] = 0;
            }
        }
    }
}
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        memset(a, 0, sizeof(a));
        memset(v, 0, sizeof(a));
        cin >> n >> p >> q;
        dfs(0);
        cout << endl;
    }
    return 0;
}


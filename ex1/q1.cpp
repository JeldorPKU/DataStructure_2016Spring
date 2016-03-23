/*
 * =====================================================================================
 *
 *       Filename:  q1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2016 14:19:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
int main(void) {
    int n, m;
    cin >> n >> m;
    int a[301] = {0};
    while (n != 0 && m != 0) {
        for (int i = 1; i <=n; ++i)
            a[i] = 1;
        int k = n, p = 0;
        while (k != 1) {
            for (int i = 1; i <= m; ++i) {
                if (p == n)
                    p = 1;
                else
                    ++p;
                if (!a[p])
                    --i;
            }
            a[p] = 0;
            --k;
        }
        for (int i = 1; i <= n; ++i) {
            if (a[i]) {
                cout << i << endl;
                break;
            }
        }
        cin >> n >> m;
    }
    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  q2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/05/2016 15:11:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
int nNodes(int n, int m) {
    int total = 0;
    int l = m, r = m;
    while (1) {
        if (r <= n) {
            total += (r - l + 1);
        } else {
            if (l <= n) {
                total += (n - l + 1);
            }
            break;
        }
        l <<= 1;
        r = r * 2 + 1;
    }
    return total;
}
int main(void) {
    while (1) {
        scanf("%d%d", &m, &n);
        if (n == 0 && m == 0)
            break;
        printf("%d\n", nNodes(n, m));
    }
    return 0;
}


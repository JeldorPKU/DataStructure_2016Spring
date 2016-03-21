/*
 * =====================================================================================
 *
 *       Filename:  q1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 10:21:58
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

int gcd(int n, int m) {
    if (n < m) {
        int t = n;
        n = m;
        m = t;
    }
    if (n % m == 0)
        return m;
    else
        return gcd(m, n % m);
}

int main(void) {
    int n, m;
    while (cin >> n >> m) {
        cout << gcd(n, m) << endl;
    }
    return 0;
}

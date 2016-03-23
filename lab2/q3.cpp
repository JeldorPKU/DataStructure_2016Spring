/*
 * =====================================================================================
 *
 *       Filename:  q3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 10:31:34
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
int ww[21][21][21];
int v[21][21][21];
int w(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    else {
        if (v[a][b][c]) {
            return ww[a][b][c];
        } else if (a < b && b < c) {
            v[a][b][c] = 1;
            return ww[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        } else {
            v[a][b][c] = 1;
            return ww[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        }
    }
}
int main(void) {
    int a, b, c;
    memset(v, 0, sizeof(v));
    while (1) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }
    return 0;
}

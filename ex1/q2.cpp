/*
 * =====================================================================================
 *
 *       Filename:  q2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2016 14:10:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    int a[100][100] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> a[i][j];
        }
    }
    int sum[100][100] = {0};
    for (int i = 0; i < n; ++i)
        sum[n - 1][i] = a[n - 1][i];
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            sum[i][j] = max(sum[i + 1][j], sum[i + 1][j + 1]) + a[i][j];
        }
    }
    cout << sum[0][0] << endl;
    return 0;
}


/*
 * =====================================================================================
 *
 *       Filename:  q8.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2016 20:58:16
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

int put(int m, int n) {
    if (n == 1) {
	return 1;
    }
    if (m < 0) {
	return 0;
    }
    return put(m, n - 1) + put(m - n, n);
}

int main(void) {
    int t;
    cin >> t;
    int m, n;
    while (t--) {
	cin >> m >> n;
	cout << put(m, n) << endl;
    }
    return 0;
}

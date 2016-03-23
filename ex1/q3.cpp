/*
 * =====================================================================================
 *
 *       Filename:  q3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/23/2016 14:18:07
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

using namespace std;

int k;
int a[25];

int defend(int height, int i) {
    while (a[i] > height) {
        i++;
    }
    if (i >= k) {
        return 0;
    }
    if (i == k - 1) {
        return 1;
    }
    int num1 = 1 + defend(a[i], i + 1);
    int num2 = defend(height, i + 1);
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void) {
    cin >> k;
    for (int j = 0; j < k; j++) {
        cin >> a[j];
    }
    cout << defend(10000000, 0);
    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  q5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2016 18:43:55
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
int main(void) {
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; ++i) {
        char c;
        while (((c = getchar()) != '\n') && c != -1) {
            if (c >= 'a' && c <= 'z')
                putchar((c - 'a' + 1) % 26 + 'a');
            else if (c >= 'A' && c <= 'Z')
                putchar((c - 'A' + 1) % 26 + 'A');
            else
                putchar(c);
        }
        putchar('\n');
    }
    return 0;
}



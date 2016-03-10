/*
 * =====================================================================================
 *
 *       Filename:  q6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2016 18:58:39
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
#include <cstring>
using namespace std;
int main(void) {
    char s[250], t[250];
    while (scanf("%s", s) != EOF) {
        scanf("%s", t);
        int len1 = strlen(s), len2 = strlen(t), len = 0, count = 0;
        for (int i = 0; i < len1 && len < len2; ++i) {
            for (int j = len; j < len2; ++j) {
                if (t[j] == s[i]) {
                    len = j + 1;
                    count++;
                    break;
                }
            }
        }
        if (count == len1)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
        getchar();
    }
    return 0;
}


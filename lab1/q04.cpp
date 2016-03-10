/*
 * =====================================================================================
 *
 *       Filename:  q4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/07/2016 20:25:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    char c;
    int i;
    for (i = 0; i < n; ++i) {
        int count[26] = {0};
        while ((c = getchar()) != '\n') {
            count[c - 'a']++;
        }
        int maxcount = -1;
        int maxindex = -1;
        int j;
        for (j = 0; j < 26; ++j)
            if (count[j] > maxcount) {
                maxindex = j;
                maxcount = count[j];
            }
        printf("%c %d\n", maxindex + 'a', maxcount);
    }
    return 0;
}


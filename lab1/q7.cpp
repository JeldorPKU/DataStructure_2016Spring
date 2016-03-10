/*
 * =====================================================================================
 *
 *       Filename:  q7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2016 18:39:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define NUM 26
int main(void) {
    int a[NUM] = {0}, i, j, maxn = 0;
    char c;
    while ((c = getchar()) >= 0) {    // 读入输入中的所有字符
        if (c >= 'A' && c <= 'Z')
            a[c - 'A']++;
    }
    for (i = 0; i < NUM; i++)
        if (a[i] > maxn)
            maxn = a[i];  // 寻找频数最大值
    for (i = maxn; i > 0; i--) {
        int m = NUM - 1;
        while (a[m] < i)  // 定位最后一个星号的位置
            m--;
        for (j = 0; j <= m; j++) {
            if (a[j] >= i)
                putchar('*');
            else
                putchar(' ');
            if (j < m)
                putchar(' ');
        }
        putchar('\n');
    }
    putchar('A');
    for (i = 1; i < NUM; i++)
        printf(" %c", i + 'A');
    putchar('\n');
    return 0;
}

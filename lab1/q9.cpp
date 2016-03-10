/*
 * =====================================================================================
 *
 *       Filename:  q9.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2016 20:21:48
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
#define NUM 5001
using namespace std;
void swap(int * x, int * y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main(void) {
    int n, m;
    cin >> n >> m;
    int id[NUM] = {0}, score[NUM] = {0};
    for (int i = 0; i < n; ++i)
        cin >> id[i] >> score[i];
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (score[j] < score[j + 1]) {
                swap(score[j], score[j + 1]);
                swap(id[j], id[j + 1]);
            } else if ((score[j] == score[j + 1]) && (id[j] > id[j + 1])) {
                swap(id[j], id[j + 1]);
            }
        }
    }
    int num = (int)(m * 1.5);
    cout << score[num - 1] << ' ';
    while (score[num - 1] == score[num] && num < n)
        ++num;
    cout << num << endl;
    for (int i = 0; i < num; ++i)
        cout << id[i] << ' ' << score[i] << endl;
    return 0;
}


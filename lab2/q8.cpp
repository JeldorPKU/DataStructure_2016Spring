/*
 * =====================================================================================
 *
 *       Filename:  q8.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 10:22:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int n, k;
int queue[100001];
bool flag[100001];
int head, tail;

void en_queue(int x) {
    queue[head++] = x;
}

int de_queue() {
    return queue[tail++];
}

bool empty() {
    return (head == tail);
}

int main()
{
    int distance[100001];
    cin >> n >> k;
    head = tail = 0;
    memset(queue, 0, sizeof(queue));
    memset(distance, 0, sizeof(distance));
    memset(flag, 0, sizeof(flag));
    en_queue(n);
    flag[n] = true;
    int temp;
    while (!empty()) {
       	n = de_queue();
    	if (n == k) {
            cout << distance[n] << endl;
            break;
        }
        temp = n + 1;
        if (temp <= 100000 && !flag[temp]) {
            flag[temp] = true;
            distance[temp] = distance[n] + 1;
            en_queue(temp);
        }
        temp = n - 1;
        if (temp >= 0 && !flag[temp]) {
            flag[temp] = true;
            distance[temp] = distance[n] + 1;
            en_queue(temp);
        }
        temp = 2 * n;
        if (temp <= 100000 && !flag[temp]) {
            flag[temp] = true;
            distance[temp] = distance[n] + 1;
            en_queue(temp);
        }
    }
    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  q7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 16:06:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <stack>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        stack<int> s;
        int out[1010];
        int next_in = 1;
        int next_out = 0;
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            cin >> out[i];
        }
        while (1) {
            if (!s.empty() && s.top() == out[next_out]) {
                next_out++;
                s.pop();
            } else {
                s.push(next_in++);
            }
            if (next_in > n && !s.empty() && s.top() != out[next_out]) {
                flag = false;
                break;
            } else if (next_in > n && s.empty())
                break;
        }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}


/*
 * =====================================================================================
 *
 *       Filename:  q6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 10:44:55
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
#include <set>
using namespace std;
set<int> myset;
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        myset.clear();
        int n, m, k;
        cin >> n >> m;
        for (int i = 0; i < n + m; ++i) {
            scanf("%d", &k);
            myset.insert(k);
        }
        cout << myset.size() << endl;
        set<int>::iterator it = myset.begin();
        cout << *it;
        for (++it; it != myset.end(); ++it)
            cout << ' ' << *it;
        cout << endl;
    }
    return 0;
}

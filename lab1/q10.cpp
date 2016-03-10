/*
 * =====================================================================================
 *
 *       Filename:  q10.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2016 19:47:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <set>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    set<int> mingming;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        mingming.insert(m);
    }
    set<int>::iterator it = mingming.begin();
    cout << mingming.size() << endl;
    cout << *it;
    for (++it; it != mingming.end(); ++it)
        cout << ' ' << *it;
    cout << endl;
    return 0;
}


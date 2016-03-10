/*
 * =====================================================================================
 *
 *       Filename:  q1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/07/2016 19:28:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

int main(void) {
    int a;
    cin >> a;
    bool flag = true;
    if (a % 4)
        flag = false;
    else if (a % 100 == 0 && a % 400 != 0)
        flag = false;
    if (flag)
        cout << 'Y' << endl;
    else
        cout << 'N' << endl;
    return 0;
}


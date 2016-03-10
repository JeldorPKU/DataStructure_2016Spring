/*
 * =====================================================================================
 *
 *       Filename:  q2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/07/2016 19:37:14
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
    int k;
    cin >> k;
    int a, b, c;
    a = b = c = 0;
    for (int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        switch (n) {
            case 1:
                a++;
                break;
            case 5:
                b++;
                break;
            case 10:
                c++;
                break;
        }
    }
    cout << a << endl << b << endl << c << endl;
    return 0;
}


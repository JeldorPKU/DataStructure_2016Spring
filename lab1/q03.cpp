/*
 * =====================================================================================
 *
 *       Filename:  q3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/07/2016 20:00:20
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
using namespace std;
double gpa(int score) {
    if (score >= 90)
        return 4.0;
    else if (score >= 85)
        return 3.7;
    else if (score >= 82)
        return 3.3;
    else if (score >= 78)
        return 3.0;
    else if (score >= 75)
        return 2.7;
    else if (score >= 72)
        return 2.3;
    else if (score >= 68)
        return 2.0;
    else if (score >= 64)
        return 1.5;
    else if (score >= 60)
        return 1.0;
    else
        return 0;
}
int main(void) {
    int n;
    cin >> n;
    double gpasum = 0;
    int creditsum = 0;
    int credit[10] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> credit[i];
        creditsum += credit[i];
    }
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        gpasum += gpa(score) * credit[i];
    }
    printf("%.2lf\n", gpasum / creditsum);
    return 0;
}


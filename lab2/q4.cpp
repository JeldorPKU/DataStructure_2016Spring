/*
 * =====================================================================================
 *
 *       Filename:  q4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 11:20:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

double plus();
double minus();
double times();
double divide();

double getNumber() {
    char s[100];
    scanf("%s", s);
    if (strlen(s) == 1 && !isdigit(s[0])) {
        switch (s[0]) {
            case '+':
                return plus();
                break;
            case '-':
                return minus();
                break;
            case '*':
                return times();
                break;
            case '/':
                return divide();
        }
    }
    return atof(s);
}

double plus() {
    double op1 = getNumber();
    double op2 = getNumber();
    return op1 + op2;
}

double minus() {
    double op1 = getNumber();
    double op2 = getNumber();
    return op1 - op2;
}

double times() {
    double op1 = getNumber();
    double op2 = getNumber();
    return op1 * op2;
}

double divide() {
    double op1 = getNumber();
    double op2 = getNumber();
    return op1 / op2;
}

int main() {
    double answer = getNumber();
    printf("%lf\n", answer);
    return 0;
}

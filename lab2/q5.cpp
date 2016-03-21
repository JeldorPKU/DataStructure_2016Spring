/*
 * =====================================================================================
 *
 *       Filename:  q5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/21/2016 13:25:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cctype>
#include <stack>
#include <cstdio>
using namespace std;
int priority(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
    }
    return 0;
}
int main(void) {
    stack<char> op;
    char c;
    int flag = 0, output = 0;
    while ((c = getchar()) != EOF) {
        if (isdigit(c) || c == '.') {
            if (flag && output)
                cout << ' ';
            cout << c;
            output = 1;
            flag = 0;
        } else {
            flag = 1;
            if (op.empty() || (priority(c) > priority(op.top())) || c == '(') {
                op.push(c);
            } else {
                if (c == ')') {
                    while (op.top() != '(') {
                        cout << ' ' << op.top();
                        op.pop();
                    }
                    op.pop();
                } else {
                    while (!op.empty() && (priority(op.top()) >= priority(c))) {
                        cout << ' ' << op.top();
                        op.pop();
                    }
                    op.push(c);
                }
            }
        }
    }
    while (!op.empty()) {
        cout << ' ' << op.top();
        op.pop();
    }
    cout << endl;
    return 0;
}


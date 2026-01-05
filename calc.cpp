#include <iostream>
#include "calc.hpp"

using namespace std;

int operations::add(int a, int b){
    return a + b;
}

int operations::sub(int a, int b){
    if (a > b) return a - b;
    return b - a;
}

int operations::mul(int a, int b){
    return a * b;
}

double operations::div(int a, int b){
    if (a > b) return a / b;
    return b / a;
}
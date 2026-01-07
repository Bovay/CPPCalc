#include <iostream>
#include "calc.hpp"

#define WELCOMEMESSAGE "What operation would you like to perform? (+,-,x,/,? to exit): "

using namespace std;

int main(){

    int val1, val2;
    char op;
    double result;
    while (true){
        cout << WELCOMEMESSAGE;
        op = chooseOp();
        if (op == '?'){
            break;
        }
        cout << "Enter your first number: ";
        val1 = validateNumber(op, false);
        cout << "Enter your second number: ";
        val2 = validateNumber(op, true);
        result = performOp(op, val1, val2);
        cout << val1 << " " << op << " " << val2 << " = " << result << endl; 
    }
    
    cout << "Have a good day!" << endl;
    return 0;

}

char chooseOp(void){
    // to be completed by taking user input and validating
}

int validateNumber(char op, bool secondNumber){
    // to be completed ensuring that the operation entered doesnt result in entered number being invalid (ex. 10 / 0)
}

double performOp(char op, int val1, int val2){
    // to be completed using switch case and calling corresponding functions in calc.cpp
}
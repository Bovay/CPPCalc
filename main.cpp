#include <iostream>
#include "calc.hpp"

int main(){

    operations op;
    int result = op.add(3,4); //assign result of add to result variable
    std::cout << "Addition result is: " << result << std::endl;
    result = op.sub(3,4); 
    std::cout << "Subtraction result is: " << result << std::endl;
    result = op.mul(3,4); 
    std::cout << "Multiplication result is: " << result << std::endl;
    result = op.div(10,5); 
    std::cout << "Division result is: " << result << std::endl;

    return 0;

}
// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

// Takes arguments by value
int square(int x){
    x = x * x;
    return x;
}

//Takes arguments by adress
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Takes arguments by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square (a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}

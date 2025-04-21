#include "calculator.h"

// Функции для операций
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b, bool& success) {
    if (b == 0) {
        success = false; // Ошибка деления на 0
        return 0.0;
    }
    success = true;
    return a / b;
}
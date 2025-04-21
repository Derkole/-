#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "Введите первое число: ";
    double number1{};
    std::cin >> number1; // Ввод первого числа

    std::cout << "Введите второе число: ";
    double number2{};
    std::cin >> number2; // Ввод второго числа

    std::cout << "Выберите операцию (+, -, *, /): ";
    char operation{};
    std::cin >> operation; // Ввод операции

    double result{};
    bool success = true; // Переменная для проверки ошибок в операции

    // В зависимости от выбранной операции выбирается соответствующая функция
    switch (operation) {
        case '+':
            result = add(number1, number2);
            break;
        case '-':
            result = subtract(number1, number2);
            break;
        case '*':
            result = multiply(number1, number2);
            break;
        case '/':
            result = divide(number1, number2, success);
            if (!success) { // Обработка ошибки деления на 0
                std::cout << "Ошибка деления на ноль" << '\n';
                return 1;
            }
            break;
        default:
            std::cout << "Неизвестная операция!" << '\n';
            return 1;
    }

    std::cout << "Результат: " << result << '\n'; // Выводим результат
    return 0;
}

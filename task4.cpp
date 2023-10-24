#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int firstNumber, secondNumber;
    cout << "Введите два целых однозначных числа: ";
    cin >> firstNumber >> secondNumber;

    int correctAnswer = firstNumber * secondNumber;
    int userAnswer;
    cout << "Сколько будет " << firstNumber << " умножить на " << secondNumber << "? ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Правильно!" << endl;
    } else {
        cout << "Неправильно. Правильный ответ: " << correctAnswer << endl;
    }
    
    return 0;
}

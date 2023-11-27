#include <iostream>
#include <locale>

using namespace std;

/*
*Лабораторная работа 5. Задание 1. Индивидуальный вариант 24. Статический массив.
*Найти количество убывающих участков в массиве.
* return 0 - все ок. return 1 - ошибка.
*/

int main() {
    setlocale(LC_ALL, "ru");

    int i, N, kol, length;
    length = 0;
    kol = 0;

    cout << "Введите размер массива N: ";
    cin >> N;

    if (N <= 0 || N > 50) {
        cerr << "Размер массива должен быть от 1 до 50";
        return 1;
    }

    int A[50];

    for (i = 0; i < N; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> A[i];
    }

    for (i = 1; i < N; i++) {
        if (A[i] < A[i - 1]) {
            length++;
        }
        else {
            if (length > 0) {
                kol++;
            }
            length = 0;
        }
    }

    if (length > 0) {
        kol++;
    }
    cout << "Количество убывающих участков: " << kol;
}

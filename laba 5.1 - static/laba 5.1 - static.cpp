#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int i, N, kol, length;
    length = 1;
    kol = 0;

    cout << "Введите размер массива N: ";
    cin >> N;

    if (N <= 0 || N > 50) {
        cerr << "Размер массива должен быть от 1 до 50";
        return 1;
    }

    int A[50];

    for (i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    for (i = 1; i < N; i++) {
        if (A[i] < A[i - 1]) {
            length++;
        }
        else {
            if (length > 1) {
                kol++;
            }
            length = 1;
        }
    }

    if (length > 1) {
        kol++;
    }
    cout << "Количество убывающих участков: " << kol;
}

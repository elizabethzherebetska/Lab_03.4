// Lab_03_4.cpp
// < Жеребецька, Єлизавета >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // Перевірка: чи точка належить до сектору або трикутника
    if ((x >= 0 && y >= 0 && (x * x + y * y <= R * R)) ||   // Сектор (I квадрант)
        (x >= -R && x <= 0 && y <= 0 && (x * x + y * y <= R * R)))  // Трикутник (IV квадрант)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    cin.get();

    return 0;
}
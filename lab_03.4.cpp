// Lab_03_4.cpp
// < ����������, ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 5

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // ��������: �� ����� �������� �� ������� ��� ����������
    if ((x >= 0 && y >= 0 && (x * x + y * y <= R * R)) ||   // ������ (I ��������)
        (x >= -R && x <= 0 && y <= 0 && (x * x + y * y <= R * R)))  // ��������� (IV ��������)
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
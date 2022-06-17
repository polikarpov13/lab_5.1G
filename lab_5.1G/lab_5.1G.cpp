#include <iostream>
#include "Date.h"
#include <Windows.h>

class correctDate {};

void checkDate(Date d) {
    if (d.getFirst() > 31 || d.getFirst() < 1 || d.getSecond() > 12 || d.getSecond() < 1)
        throw correctDate();
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Date A, B, C, D;

    cout << " Enter A: " << endl;
    cin >> A;

    try {
        checkDate(A);
    }
    catch (correctDate) {
        cout << "Date is incorrect!";
    }

    cout << " Enter B: " << endl;
    cin >> B;

    try {
        checkDate(B);
    }
    catch (correctDate) {
        cout << "Date is incorrect!";
    }

    cout << " A > B " << endl;
    if (A > B)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << " Enter C: " << endl;
    cin >> C;

    try {
        checkDate(C);
    }
    catch (correctDate) {
        cout << "Date is incorrect!";
    }

    cout << " Enter D: " << endl;
    cin >> D;

    try {
        checkDate(D);
    }
    catch (correctDate) {
        cout << "Date is incorrect!";
    }

    cout << " C > D " << endl;
    if (C > D)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << " Кількість елементів класу Date : " << Object::Count() << endl;

}
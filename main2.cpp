#include <iostream>
using namespace std;
int main() 
{
    // задача Begin2
    // декларація змінних
    double A, B, C;
    
    // введення змінної
    cout << "Введiть точку A: ";
    cin >> A;
    cout << "Введiть точку B: ";
    cin >> B;
    cout << "Введiть точку C (вона мiж A i B): ";
    cin >> C;

    // розрахунок результату
    double AC = C - A;
    double BC = C - B;

    double P = AC * BC;

    cout << "AC = " << AC << ", BC = " << BC << endl;
    cout << "Добуток AC * BC = " << P << endl;

    return 0;
}

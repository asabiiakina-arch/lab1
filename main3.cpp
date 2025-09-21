#include <iostream>
using namespace std;

int main() 
{
     // задача Begin1
    // декларація змінних
    double V1, V2, S, T;
    // введення змінної
    cout << " швидкiсть першого автомобiля: ";
    cin >> V1;
    cout << " швидкiсть другого автомобiля: ";
    cin >> V2;
    cout << " початкову вiдстань мiж ними: ";
    cin >> S;
    cout << " час руху: ";
    cin >> T;
    // обчислюємо відстань
   // обчислюємо відстань між автомобілями
    double D = S - T * (V1 + V2);
    D = D * (D >= 0) - D * (D < 0);
    cout << "Вiдстань пiсля " << T << " годин = " << D << " км" << endl;
    double AC = V1;
    double BC = V2;
    double P = AC * BC;
    cout << "AC = " << AC << ", BC = " << BC << endl;
    cout << "Добуток AC * BC = " << P << endl;
    return 0;
}

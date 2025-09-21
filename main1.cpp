#include <iostream>
using namespace std ;
int main()
{
    // задача Begin1
    // декларація змінних
    double a, b, c;
    
    // введення змінної
    cout << " Введіть три числа: ";
    cin >> a >> b >> c;
    
    // розрахунок результату
    double average = (a + b + c) / 3;
    
    // вивід результату
    cout << " Середнє арифметичне = " << average << endl;
    return 0;
}

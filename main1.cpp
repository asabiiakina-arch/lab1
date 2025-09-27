#include <iostream>
using namespace std ;
int main()
{
    // задача Begin1
    // декларація змінних
    double a, b, c;
    
    // введення змінної
   cout << "Введiть точку a: ";
    cin >> a;
    cout << "Введiть точку b: ";
    cin >> b;
    cout << "Введiть точку c: ";
    cin >> c;
    
    // розрахунок результату
    double average = (a + b + c) / 3;
    
    // вивід результату
    cout << " Середнє арифметичне = " << average << endl;
    return 0;
}

#include <iostream>

using namespace std;
const int MAX_EL = 30;

int main() {
    //Потребителя въвежда с колко клетки иска да работи
    int el;
    do {
        cout << "Въведете броя на редовете и колоните на E в интервала [1, "
             << MAX_EL << "]: ";
        cin >> el;
    } while (el < 0 || el > MAX_EL);

    double e[MAX_EL][MAX_EL];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << el << "реда и "
         << el << " стълба на матрицата.\n";

    for (int row = 0; row < el; ++row) {
        for (int col = 0; col < el; ++col) {
            cout << "e[" << row << "][" << col << "] = ";
            cin >> e[row][col];
        }
    }

    //Сибираме елементите под главния диагонал
    double sum = 0;
    for (int row = 1; row < el; row++) {
        for (int col = 0; col < row; col++) {
            sum += e[row][col];
        }
    }

    cout << "Сумата на елементите под главния диагонал е " << sum << endl;


    return 0;
}
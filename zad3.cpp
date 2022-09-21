#include <iostream>

using namespace std;
const int MAX_EL = 20;

int main() {
    //Потребителя въвежда с колко клетки иска да работи
    int el;
    do {
        cout << "Въведете броя на редовете и колоните на В в интервала [1,"
             << MAX_EL << "]: ";
        cin >> el;
    } while (el < 0 || el > MAX_EL);

    int b[MAX_EL][MAX_EL];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << el << "реда и "
         << el << " стълба на матрицата.\n";

    for (int row = 0; row < el; ++row) {
        for (int col = 0; col < el; ++col) {
            cout << "b[" << row << "][" << col << "] = ";
            cin >> b[row][col];
        }
    }

    //Сибираме елементите по колони
    for (int col = 0; col < el; ++col) {
        int sum_row = 0;
        for (int row = 0; row < el; ++row) {
            sum_row += b[row][col];
        }
        cout << "Сумата на " << col + 1 << " колона е " << sum_row << endl;
    }


    return 0;
}
#include <iostream>

using namespace std;
const int MAX_EL = 10;

int main() {
    //Потребителя въвежда с колко клетки иска да работи
    int iRow, iCol;
    do {
        cout << "Въведете броя на редовете на В в интервала [1, "
             << MAX_EL << "]: ";
        cin >> iRow;
        cout << "Въведете броя на колоните на В в интервала [1, "
             << MAX_EL << "]: ";
        cin >> iCol;
    } while ((iRow < 0 || iRow > MAX_EL) && (iCol < 0 || iCol > MAX_EL));

    int k[MAX_EL][MAX_EL];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << iRow << " реда и "
         << iCol << " стълба на матрицата.\n";

    for (int row = 0; row < iRow; ++row) {
        for (int col = 0; col < iCol; ++col) {
            cout << "k[" << row << "][" << col << "] = ";
            cin >> k[row][col];
        }
    }

    //Намираме сумата на четните елементи
    int sumEven = 0;
    for (int row = 0; row < iRow; ++row) {
        for (int col = 0; col < iCol; ++col) {
            if (k[row][col] % 2 == 0) {
                sumEven += k[row][col];
            }
        }
    }
    cout << "Сумата на четните стойности е " << sumEven << endl;

    //Извежда елементите на матрицата
    for (int row = 0; row < iRow; ++row) {
        for (int col = 0; col < iCol; ++col) {
            cout << k[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
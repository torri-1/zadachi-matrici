#include <iostream>
#include <cmath>

using namespace std;
const int MAX_ROW = 10;
const int MAX_COL = 15;

int main() {
    //Потребителя въвежда с колко клетки иска да работи
    int i_rows, i_cols;
    do {
        cout << "Въведете броя на редовете на С " <<
             "в интервала [1, " << MAX_ROW << "]: ";
        cin >> i_rows;
        cout << "Въведете броя на колоните на С " <<
             "в интервала [1, " << MAX_COL << "]: ";
        cin >> i_cols;
    } while ((i_rows < 0 || i_rows > MAX_ROW) && (i_cols < 0 || i_cols > MAX_COL));

    double o[MAX_ROW][MAX_COL];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << i_rows << " реда и "
         << i_cols << " стълба на матрицата.\n";

    for (int row = 0; row < i_rows; ++row) {
        for (int col = 0; col < i_cols; ++col) {
            cout << "o[" << row << "][" << col << "] = ";
            cin >> o[row][col];
        }
    }

    //Претърсва въведените стойности за числото 2.5
    for (int row = 0; row < i_rows; ++row) {
        for (int col = 0; col < i_cols; ++col) {
            if (fabs(o[row][col] - 2.5) < numeric_limits<double>::epsilon()) {
                cout << "o[" << row << "][" << col << "] = 2.5\n";
            }
        }
    }

    return 0;
}
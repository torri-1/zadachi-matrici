#include <iostream>

using namespace std;
const int MAX_ROW = 10;
const int MAX_COL = 20;

int main() {
    //Потребителя въвежда с колко клетки иска да работи
    int i_rows, i_cols;
    do {
        cout << "Въведете броя на редовете на A " <<
             "в интервала [1, " << MAX_ROW << "]: ";
        cin >> i_rows;
        cout << "Въведете броя на колоните на A " <<
             "в интервала [1, " << MAX_COL << "]: ";
        cin >> i_cols;
    } while ((i_rows < 0 || i_rows > MAX_ROW) && (i_cols < 0 || i_cols > MAX_COL));

    int a[MAX_ROW][MAX_COL];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << i_rows << "реда и "
         << i_cols << " стълба на матрицата.\n";

    for (int row = 0; row < i_rows; ++row) {
        for (int col = 0; col < i_cols; ++col) {
            cout << "a[" << row << "][" << col << "] = ";
            cin >> a[row][col];
        }
    }

    //Намира сумата на елементите по редове
    for (int row = 0; row < i_rows; ++row) {
        int sum_row = 0;
        for (int col = 0; col < i_cols; ++col) {
            sum_row += a[row][col];
        }
        cout << "Сумата на " << row + 1 << " ред е " << sum_row << endl;
    }

    //Извежда елементите в обратен ред
    for (int row = i_rows - 1; row >= 0; --row) {
        for (int col = i_cols - 1; col >= 0; --col) {
            cout << a[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}
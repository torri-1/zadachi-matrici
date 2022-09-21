#include <iostream>

using namespace std;
const int MAX_ROW = 20;
const int MAX_COL = 30;

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

    double c[MAX_ROW][MAX_COL];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << i_rows << "реда и "
         << i_cols << " стълба на матрицата.\n";

    for (int row = 0; row < i_rows; ++row) {
        for (int col = 0; col < i_cols; ++col) {
            cout << "c[" << row << "][" << col << "] = ";
            cin >> c[row][col];
        }
    }

    //Намира най-големия елемент в матрицата
    double max_element = INT16_MIN;
    for (int row = 0; row < i_rows; ++row) {
        for (int col = 0; col < i_cols; ++col) {
            if (c[row][col] > max_element) {
                max_element = c[row][col];
            }
        }
    }

    cout << "Най-големия елемент в матрицата е: " << max_element << endl;

    return 0;
}
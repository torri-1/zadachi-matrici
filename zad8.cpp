#include <iostream>

using namespace std;

int main() {
    int t[4][3];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << 4 << " реда и "
         << 3 << " стълба на матрицата M.\n";

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 3; ++col) {
            cout << "t[" << row << "][" << col << "] = ";
            cin >> t[row][col];
        }
    }

    //Намиране на транспонираната матрица
    int p[3][4];
    for (int row = 0; row < 4; ++row)
        for (int col = 0; col < 3; ++col) {
            p[col][row] = t[row][col];
        }

    //Извеждане на матрица Р
    cout << "Трнаспонираната матрица Т' е:" << endl;
    for (auto &row: p) {
        for (int col: row) {
            cout << col << "\t";
        }
        cout << endl;
    }

    return 0;
}
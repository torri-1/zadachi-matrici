#include <iostream>

using namespace std;

int main() {
    int m[5][4], x[4][5];

    //Запълване клетите на матрицата
    cout << "Въвеждане на " << 5 << " реда и "
         << 4 << " стълба на матрицата M.\n";

    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 4; ++col) {
            cout << "m[" << row << "][" << col << "] = ";
            cin >> m[row][col];
        }
    }

    cout << "Въвеждане на " << 4 << " реда и "
         << 5 << " стълба на матрицата M.\n";

    for (int row = 0; row < 4; ++row) {
        for (int col = 0; col < 5; ++col) {
            cout << "x[" << row << "][" << col << "] = ";
            cin >> x[row][col];
        }
    }

    int p[5][5];
    //Зануляване на матрицата Р
    for (auto & row : p) {
        for (int & col : row) {
            col = 0;
        }
    }

    //Матрично умножение/ред по стълб/
    for (int row = 0; row < 5; ++row) {
        for (int colX = 0; colX < 5; ++colX) {
            for (int colM = 0; colM < 4; ++colM) {
                p[row][colX] += m[row][colM] * x[colM][colX];
            }
        }
    }

    //Извеждане на матрица Р
    cout << "Резултат от матричното умножение м/у М и Х" << endl;
    for (auto &row: p) {
        for (int col: row) {
            cout << col << "\t";
        }
        cout << endl;
    }

    return 0;
}
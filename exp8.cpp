#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> mat;
    int rows, cols;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        mat.resize(rows, vector<int>(cols, 0));
    }

    void input() {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() const {
        cout << "Matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overloading the + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw "Matrices dimensions do not match for addition";
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    // Overloading the - operator for matrix subtraction
    Matrix operator-(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw "Matrices dimensions do not match for subtraction";
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }

    // Overloading the * operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw "Matrices dimensions do not match for multiplication";
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows >> cols;
    Matrix m1(rows, cols);
    m1.input();

    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows >> cols;
    Matrix m2(rows, cols);
    m2.input();

    Matrix m3 = m1 + m2;
    cout << "Addition of two matrices:\n";
    m3.display();

    Matrix m4 = m1 - m2;
    cout << "Subtraction of two matrices:\n";
    m4.display();

    Matrix m5 = m1 * m2;
    cout << "Multiplication of two matrices:\n";
    m5.display();

    return 0;
}


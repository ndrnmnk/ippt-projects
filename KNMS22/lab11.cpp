#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

template <typename T>
class Matrix {
    public:
        int rows;
        int cols;
        std::vector<std::vector<T>> data;

        Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<T>(c)) {}

        void fillMatrix() {
            cout << "Введіть матрицю:\n";
            for (int i = 0; i < rows; ++i)
                for (int j = 0; j < cols; ++j)
                    cin >> data[i][j];
        }

        int calculate_no_zero_rows() {
            int temp = rows;
            for (int i = 0; i < rows; ++i)
                for (int j = 0; j < cols; ++j)
                    if (data[i][j] == 0) { temp--; break; }
            return temp;
        }

        T findMaxRepeatedElement() const {
            std::unordered_map<int, int> frequencyMap;
            for (const auto& row : data)
                for (int elem : row)
                    frequencyMap[elem]++;

            int maxRepeatedElement = 0;
            bool foundRepeated = false;
            for (const auto& pair : frequencyMap) {
                if (pair.second > 1) {
                    if (!foundRepeated || pair.first > maxRepeatedElement) {
                        maxRepeatedElement = pair.first;
                        foundRepeated = true;
                    }
                }
            }
            return foundRepeated ? maxRepeatedElement : 0;
        }

        void moveZerosToFront() { // broken
            for (auto& row : data) {
                std::stable_partition(row.begin(), row.end(), [](const T& elem) { return elem == 0; });
            }
        }

        void printMatrix() const {
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j)
                    cout << data[i][j] << ' ';
                cout << endl;
            }
        }

};

int main() {
    int rows, cols;
    std::cout << "Введіть розмір матриці:\n";
    std::cin >> rows >> cols;

    Matrix<int> matrix(rows, cols);
    matrix.fillMatrix();

    cout << "Найбільший повторюваний елемент (або 0, якщо всі зустрічаються по 1 разу): " << matrix.findMaxRepeatedElement() << endl;
    matrix.moveZerosToFront();
    cout << "Матриця з переміщеними нулями:\n";
    matrix.printMatrix();
    cout << "Рядків що не містять нулів: " << matrix.calculate_no_zero_rows();
}
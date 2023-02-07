// заполнение, вывод и вычисление суммы для типа данных vector

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void filling_vec(vector <vector <int>>& vec);   //заполнение матрицы
void print_vec(vector <vector <int>>& vec);     //вывод матрицы
int sum_vec(vector <vector <int>>& vec);        //подсчет суммы всех элементов массива

int main()
{
    vector <vector <int>> vec;      //вектор векторов
    int col, row, sum;              //col - столбцы, row - строки, sum 0 сумма всех элементов
    cout << "enter col: ";
    cin >> col;
    cout << "enter row: ";
    cin >> row;
    vec.resize(row);                //задаем кольчество строк
    for (int i = 0; i < row; i++)
    {
        vec[i].resize(col);         //задаем количество столбцов
    }
    filling_vec(vec);               //заполняем
    print_vec(vec);                 //выводим
    sum = sum_vec(vec);             //сумма всех элементов
    cout << "sum of all elements: " << sum << endl;       //вывод суммы
}

void filling_vec(vector <vector <int>>& vec)        //заполнение матрицы
{
    srand(time(NULL));                              //делаем чтобы числа не повторялись при разных запусках
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            vec[i][j] = rand() % 10 - 1;            //заполнение
        }
    }
}

void print_vec(vector <vector <int>>& vec)          //вывод матрицы
{
    cout << "matrix:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << "\t";              //вывод
        }
        cout << "\n";
    }
}

int sum_vec(vector <vector <int>>& vec)              //подсчет суммы всех элементов массива
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            sum = sum + vec[i][j];                 //подсчет
        }
    }
    return sum;
}
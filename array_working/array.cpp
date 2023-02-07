// заполнение и вывод массива
//

#include <iostream>
#include <time.h>
#include <string>
#include <fstream>
#include "Header.h"

using namespace array_ns;
using namespace std;

int main()
{
    int n, sum;                             //n - размер массива, sum - сумма всех элементов
    cout << "enter n: ";
    cin >> n;
    int* array = new int[n];                //выделение память под массивв
    filling_array(array, n);                //заполнение массива
    print_array(array, n);                  //вывод массива
    /*sum = sum_array(array, n);              //подсчет суммы всех элементов
    std::cout << "sum of all elements: " << sum << std::endl;   //вывод суммы*/

    string path = "f.txt";                  //название файла f
    ofstream ar_file (path);                //создаем фаил для записи

    write_in_file("f.txt", array, n);

    /*vec_file.open(path);            //открываем файл для записи, связываем с именем
    if (!vec_file.is_open())        //если не удалось открыть
    {
        cout << "file open error1" << endl;//сообщаем об этом
    }
    else                            //если открылся
    {
        write_in_file("f.txt", array, n);
    }
    vec_file.close();//закрываем файл*/
     
    int* ar = read_from_file("f.txt");      //создвем массив для записи из файла, записываем 

    sum = sum_array(ar, n);                 //подсчет суммы всех элементов
    cout << "sum of all elements: " << sum << endl;   //вывод суммы
    /*cout << "array from file:\n";
    print_array(ar, n);*/
}
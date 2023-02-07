#include "Header.h"
#include <time.h>
#include <iostream>
#include <string>
#include <fstream>


namespace array_ns {
   
    void filling_array(int* array, int n)         //заполнение массива
    {
        srand(time(NULL));                        //делаем чтобы числа не повторялись при разных запусках
        for (int i = 0; i < n; i++)
        {
            array[i] = rand() % 10 - 1;           //заполнение случайным числом
        }
    }

    int sum_array(int* array, int n)              //подсчет суммы всех элементов массива
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + array[i];                 //подсчет
        }
        return sum;
    }

    void print_array(int* array, int n)           //вывод массива
    {
        std::cout << "array: \n";
        for (int i = 0; i < n; i++)
        {
            std::cout << array[i] << "\t";        //вывод массива
        }
        std::cout << "\n";
    }
    
    
    void write_in_file(std::string path, int* array, int n)//запись матрицы в файл
    {
        std::ofstream file_f(path);         //создаем и открываем файл для записи, связываем с именем
       // file_f.open(path);                //открываем файл для записи, связываем с именем
        if (!file_f.is_open())              //если не удалось открыть
        {
            std::cout << "file open error1" << std::endl;     //сообщаем об этом
        }
        else                                //если открылся
        {
            std::cout << "file opened successfully" << std::endl;
            for (int i = 0; i < n; i++)
            {
                    file_f << array[i] << "\t";     //поэлементно записываем массив в файл
            }

        }
        file_f.close();                     //закрываем файл
    }


    int* read_from_file(std::string path)   //чтение из файла и записывание данных в массив
    {
        using namespace std;
        ifstream in_file(path);         //создаем и открываем файл для чтения, связываем с именем
        int size = 0;                   //size - рамер файла
        std::string str;                //для поэлементного считывания
        while (!in_file.eof())
        {
            in_file >> str;             //
            size++;                     //увеличиваем размер
        }
        in_file.clear();                //очищаем
        in_file.seekg(0);               //ставим указатель на начало
        int* array = new int[size-1];   //создаем новый масиив для записи из файла
        for (int i = 0; i < (size - 1); i++)
        {
            in_file >> str;             //записываем элемент из файла в str
            array[i] = stoi(str);       //записываем этот эдемент в массив
        }
        in_file.close();                //закрываем файл
        return array;
    }
}
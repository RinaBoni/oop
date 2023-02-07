#pragma once
#include <string>

namespace array_ns {

	void filling_array(int* array, int n);        //заполнение массива

	void print_array(int* array, int n);          //вывод массива

	int sum_array(int* array, int n);             //подсчет суммы всех элементов массива

	int* read_from_file(std::string path);		  //чтение из файла и записывание данных в массив

	void write_in_file(std::string path, int* array, int n);//запись матрицы в файл
}
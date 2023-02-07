#pragma once
#include <string>

namespace array_ns {

	void filling_array(int* array, int n);        //���������� �������

	void print_array(int* array, int n);          //����� �������

	int sum_array(int* array, int n);             //������� ����� ���� ��������� �������

	int* read_from_file(std::string path);		  //������ �� ����� � ����������� ������ � ������

	void write_in_file(std::string path, int* array, int n);//������ ������� � ����
}
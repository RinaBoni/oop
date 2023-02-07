#include "Header.h"
#include <time.h>
#include <iostream>
#include <string>
#include <fstream>


namespace array_ns {
   
    void filling_array(int* array, int n)         //���������� �������
    {
        srand(time(NULL));                        //������ ����� ����� �� ����������� ��� ������ ��������
        for (int i = 0; i < n; i++)
        {
            array[i] = rand() % 10 - 1;           //���������� ��������� ������
        }
    }

    int sum_array(int* array, int n)              //������� ����� ���� ��������� �������
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + array[i];                 //�������
        }
        return sum;
    }

    void print_array(int* array, int n)           //����� �������
    {
        std::cout << "array: \n";
        for (int i = 0; i < n; i++)
        {
            std::cout << array[i] << "\t";        //����� �������
        }
        std::cout << "\n";
    }
    
    
    void write_in_file(std::string path, int* array, int n)//������ ������� � ����
    {
        std::ofstream file_f(path);         //������� � ��������� ���� ��� ������, ��������� � ������
       // file_f.open(path);                //��������� ���� ��� ������, ��������� � ������
        if (!file_f.is_open())              //���� �� ������� �������
        {
            std::cout << "file open error1" << std::endl;     //�������� �� ����
        }
        else                                //���� ��������
        {
            std::cout << "file opened successfully" << std::endl;
            for (int i = 0; i < n; i++)
            {
                    file_f << array[i] << "\t";     //����������� ���������� ������ � ����
            }

        }
        file_f.close();                     //��������� ����
    }


    int* read_from_file(std::string path)   //������ �� ����� � ����������� ������ � ������
    {
        using namespace std;
        ifstream in_file(path);         //������� � ��������� ���� ��� ������, ��������� � ������
        int size = 0;                   //size - ����� �����
        std::string str;                //��� ������������� ����������
        while (!in_file.eof())
        {
            in_file >> str;             //
            size++;                     //����������� ������
        }
        in_file.clear();                //�������
        in_file.seekg(0);               //������ ��������� �� ������
        int* array = new int[size-1];   //������� ����� ������ ��� ������ �� �����
        for (int i = 0; i < (size - 1); i++)
        {
            in_file >> str;             //���������� ������� �� ����� � str
            array[i] = stoi(str);       //���������� ���� ������� � ������
        }
        in_file.close();                //��������� ����
        return array;
    }
}
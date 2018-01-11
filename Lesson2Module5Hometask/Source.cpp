#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define size 20
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task, length = size;

	do
	{
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*Массив предназначен для хранения значений весов двадцати человек.
					С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно*/
				int m[size];
				for (int i = 0; i < length; i++)
				{
					m[i] = 50 + rand() % 50;
					cout << "Человек " << i + 1 << "-й, вес = " << m[i] << endl;
				}
			} break;

			case 2:
			{
				/*2.	Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали :
				a.убывающую последовательность;
				b.возрастающую последовательность*/
				int m[size], tempo, m2[size];
				for (int i = 0; i < length; i++)
				{
					m[i] = -50 + rand() % 100;
					m2[i] = m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 0; i < length; i++)
				{
					for (int j = length - 1; j > 0; j--)
					{
						if (m[j-1] < m[j])
						{
							tempo = m[j - 1];
							m[j - 1] = m[j];
							m[j] = tempo;
						}
					}
				} 
				cout << "Убывающая последовательность" << endl;
				for (int i = 0; i < length; i++)
				{
					cout << m[i] << endl;
				}

				for (int i = 0; i < length; i++)
				{
					for (int j = length - 1; j > 0; j--)
					{
						if (m2[j - 1] > m2[j])
						{
							tempo = m2[j - 1];
							m2[j - 1] = m2[j];
							m2[j] = tempo;
						}
					}
				}
				cout << "Возрастающая последовательность" << endl;
				for (int i = 0; i < length; i++)
				{
					cout << m2[i] << endl;
				}

			} break;

			case 3:
			{
				/*Ввести целочисленный массив, состоящий из 10 элементов.Поменять местами максимальный и первый элементы.*/
				int m[size], max = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -50 + rand() % 100;
					if (m[i] > max)
						max = m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				} 
				cout << "MAX === " << max << endl;
				for (int i = 0; i < length; i++)
				{
					if (i == 0)
						m[i] = max;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
			} break;

			case 4:
			{
				/*Задан массив, состоящий из 15 элементов вещественного типа.
					Определить количество элементов, значения которых больше первого элемента.*/
				int m[size], count = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -50 + rand() % 100;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				for (int i = 1; i < length; i++)
				{
					if (m[0] < m[i])
						count++;
				}
				cout << "Кол-во значений, которые больше " << m[0] << " == " << count << endl;
			} break;

			case 5:
			{
				/*5.	Ввести целочисленный массив, состоящий из 15 элементов.Определить сумму и разность максимального и минимального  элементов*/
			} break;
		}
	} while (task < 11);

}
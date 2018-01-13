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
				int m[size], max = 0, min = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (m[i] < min)
						min = m[i];
					if (m[i] > max)
						max = m[i];
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				cout << "\nСумма макс значения " << max << " и мин значения " << min << " = " << max + min << endl;
				cout << "\nРазность макс значения " << max << " и мин значения " << min << " = " << max - min << endl;
			} break;

			case 6:
			{
				/*Ввести целочисленный массив, состоящий из 17 элементов.Заменить элементы кратные трем на сумму нечетных по значению элементов*/
				int m[size], sum = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
					if (m[i] % 2 != 0)
						sum += m[i];
				}
				cout << "После изменения\n" << endl;
				for (int i = 0; i < length; i++)
				{
					if (m[i] % 3 == 0)
						m[i] = sum;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
			} break;

			case 7:
			{
				/*Ввести массив, состоящий из 15 элементов целого типа.Определить количество отрицательных, произведение положительных и количество нулевых элементов*/
				int m[size], minus = 0, plus = 0, null = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
					if (m[i] < 0)
						minus++;
					if (m[i] > 0)
						plus++;
					if (m[i] == 0)
						null++;
				}
				cout << "Кол-во отрицательных элементов в массиве - " << minus << endl;
			} break;

			case 8:
			{
				/*Дан массив − 19 элементов целого типа.Найти сумму элементов, расположенных 
					до первого отрицательного элемента.Если отрицательных элементов нет, 
					то выдать соответствующее сообщение.*/
				int m[size], sum = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
					if (m[i] >= 0)
						sum += m[i];
					else if (m[i] < 0)
						break;
					else if (i == 19)
						cout << "Отрицательных элементов нет" << endl;
				} 
				cout << "Сумма элементов расположенных до первого отрицательного - " << sum << endl;
			} break;

			case 9:
			{
				/*В заданном массиве М(12) действительных чисел увеличить минимальный элемент в три раза и поменять местами с последним*/
				int m[size], min = 0;
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					if (m[i] < min)
						min = m[i];
					else if (i == 19)
					{
						min *= 3;
						m[i] = min;
					}
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
			} break;

			case 10:
			{
				/*10.	Дан массив М(15) вещественных чисел.Расположить элементы в обратном порядке*/
				int m[size];
				for (int i = 0; i < length; i++)
				{
					m[i] = -100 + rand() % 200;
					cout << "Index [" << i << "] === " << m[i] << endl;
				}
				cout << "\nВ обратном порядке" << endl;
				for (int i = size - 1; i >= 0; i--)
				{
					cout << "Index [" << i << "] === " << m[i] << endl;
				}

			} break;
		}
	} while (task < 11);

}
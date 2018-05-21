#pragma once
#include <iostream>

using std::cout;
using std::endl;



namespace Program
{
	typedef  unsigned int ui;

	class stek
	{
	private:
		int* arr;
		int Max;
		int index = 0;

	public:
		stek(int number)
		{
			Max = 1000;
			if (number <= Max)
			{
				arr = new int[number];
				Max = number;
			}
			else cout << "переполнение стека!\n";

		}
		~stek()
		{
			delete[] arr;
		};

		bool Push(int n)
		{
			if (index == Max) return false;
			else
			{
				arr[index] = n;
				index++;
				return true;
			}
		}

		int Pop()
		{
			if (index < 0) return -1;
			else return arr[--index];
		}

		bool Is_emty()
		{
			if (index <= 0) return true;
			else return false;
		}
		bool Is_full()
		{
			if (index == Max) return true;
			else return false;
		}

	};
	struct Stek
	{
		int key;
		Stek* next;
	};



	

	class Stek2
	{
	public:
		Stek2();
		~Stek2();
		void Print()
		{
			Stek *print = next;

			while (print)
			{
				cout << print->key << " -> ";
				print = print->next;
			}
			cout << "NULL\n";
		}
		void Push(int d)
		{
			Stek *pv = new Stek;      // объ¤вл¤ем новую динамическую переменную типа stek
			pv->key = d;                // записываем  значение, которое помещаетс¤ в стек
			pv->next = next;          // св¤зываем новый элемент стека с предыдущим
			next = pv;                // новый элемент стека становитс¤ его вершиной

		}
		int Pop()
		{
			int temp = next->key;		// извлекаем в переменную temp значение в вершине стека
			Stek *pv = next;				// запоминаем указатель на вершину стека, чтобы затем
											// освободить выделенную под него пам¤ть
			next = next->next;      // вершиной становитс¤ предшествующий top элемент
			delete pv;					 // освобождаем пам¤ть, тем самым удалили вершину
			return temp;				// возвращаем значение, которое было в вершине
		}
	private:
		Stek * next;
	};

	

}
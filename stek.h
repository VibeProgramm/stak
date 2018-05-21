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
			else cout << "������������ �����!\n";

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
			Stek *pv = new Stek;      // �������� ����� ������������ ���������� ���� stek
			pv->key = d;                // ����������  ��������, ������� ��������� � ����
			pv->next = next;          // �������� ����� ������� ����� � ����������
			next = pv;                // ����� ������� ����� ��������� ��� ��������

		}
		int Pop()
		{
			int temp = next->key;		// ��������� � ���������� temp �������� � ������� �����
			Stek *pv = next;				// ���������� ��������� �� ������� �����, ����� �����
											// ���������� ���������� ��� ���� �����
			next = next->next;      // �������� ��������� �������������� top �������
			delete pv;					 // ����������� �����, ��� ����� ������� �������
			return temp;				// ���������� ��������, ������� ���� � �������
		}
	private:
		Stek * next;
	};

	

}
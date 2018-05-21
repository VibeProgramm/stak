////////////////////////////////////////////////////////////
//Автор: Мурзин Алексей								 ///////
//Стэк												////////
////////////////////////////////////////////////////////////

#include <std_lib_facilities.h>
#include "stek.h"

using Program::stek;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	stek a(5);

	for (int i = 0; !a.Is_full(); i++)
	{
		a.Push(i + 1);
	}

	for (int i = 0; !a.Is_emty(); i++)
	{
		cout << a.Pop() << endl;
	}
	
	
	_getch();
	return 0;
}
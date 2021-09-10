#include "compara.h"

int theClosest()
{
	std::cout << "Introduceti numarul de temperaturi:\n";
	int numarT = 0;
	std::cin >> numarT;
	std::cout << "Introduceti temperaturile:\n";
	std::vector <int> stocare;
	int temp = 0;
	for (int i = 0; i < numarT; i++)
	{
		std::cin >> temp;
		stocare.push_back(temp);
	}
	numarT = abs(stocare.at(0));
	temp = 0;
	for(int i=1;i<stocare.size();i++)
	{
		if (numarT == 0)return numarT;
		if(numarT>abs(stocare.at(i)))
		{
			numarT = abs(stocare.at(i));
			temp = i;
		}
		if (numarT - abs(stocare.at(i)) == 0)
		{
			if (stocare.at(i) > 0)
				temp = i;
		}
	}
	return stocare.at(temp);
}
#include <iostream>
#include <cstring>
#include <algorithm>
#include "bitmap.h"
using namespace std;

Laptop::Laptop()
{
	// code here
}

Laptop::Laptop(int id, const char *m, double c)
{
	// code here
	lid = id;
	strcpy(make, m);
	cost = c;
}

int Laptop::GetLid()
{
	// code here
	return lid;
}

char *Laptop::GetMake()
{
	// code here
	return make;
}

double Laptop::GetCost()
{
	// code here
	return cost;
}

void Laptop::Display()
{
	// code here
	cout << "Laptop ID: " << lid << "Manufacturer: " << make << "Cost: " << cost << endl;
}

void LaptopStore::InsertLaptop(Laptop l)
{
	// code here
	vect_laptop.push_back(l);
}

bool compare(Laptop l1, Laptop l2)
{
	return l1.GetCost() < l2.GetCost();
}

void LaptopStore::SortLaptops()
{
	// code here
	sort(vect_laptop.begin(), vect_laptop.end(), compare);
}

vector<Laptop> LaptopStore::GetVect_Laptop()
{
	// code here
	return vect_laptop;
}

Laptop LaptopStore::GetMinCostLaptop()
{
	// code here
	return *min_element(vect_laptop.begin(), vect_laptop.end(), compare);
}

Laptop LaptopStore::GetMaxCostLaptop()
{
	// code here
	return *max_element(vect_laptop.begin(), vect_laptop.end(),
						compare);
}

void LaptopStore::ShowLaptops()
{
	// code here
	for (Laptop l : vect_laptop)
	{
		l.Display();
	}
}

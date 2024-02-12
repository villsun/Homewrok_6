﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

struct Washing_Machine
{
	char brand[30];
	char color[15];
	int width;
	int length;
	int height;
	double power;
	double spin_speed;
	double heating_temperature;
};

struct Iron
{
	char brand[30];
	char type[30];
	char color[15];
	double min_temperature;
	double max_temperature;
	bool steam_supply;
	double power;
};

int main()
{
	// Завдання 1

	/*Washing_Machine washing_machine_1;

	strcpy(washing_machine_1.brand, "Samsung");
	strcpy(washing_machine_1.color, "white");
	washing_machine_1.width = 30;
	washing_machine_1.length = 20;
	washing_machine_1.height = 30;
	washing_machine_1.power = 10.5;
	washing_machine_1.spin_speed = 12.5;
	washing_machine_1.heating_temperature = 60.5;

	cout << "Brand = " << washing_machine_1.brand << endl;
	cout << "Color = " << washing_machine_1.color << endl;
	cout << "Width = " << washing_machine_1.width << endl;
	cout << "Length = " << washing_machine_1.length << endl;
	cout << "Height = " << washing_machine_1.height << endl;
	cout << "Power = " << washing_machine_1.power << endl;
	cout << "Spin speed = " << washing_machine_1.spin_speed << endl;
	cout << "Heating temperature = " << washing_machine_1.heating_temperature << endl;*/

	// Завдання 2

	Iron iron_1;

	strcpy(iron_1.brand, "Apple");
	strcpy(iron_1.type, "1 plus");
	strcpy(iron_1.color, "white");
	iron_1.min_temperature = 15.5;
	iron_1.max_temperature = 45.5;
	iron_1.steam_supply = true;
	iron_1.power = 50;

	cout << "Brand = " << iron_1.brand << endl;
	cout << "Type = " << iron_1.type << endl;
	cout << "Color = " << iron_1.color << endl;
	cout << "Minimum temperature = " << iron_1.min_temperature << endl;
	cout << "Maximum temperature = " << iron_1.max_temperature << endl;
	cout << "Steam supply = " << iron_1.steam_supply << endl;
	cout << "Power = " << iron_1.power << endl;

	return 0;
}

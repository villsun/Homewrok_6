#define _CRT_SECURE_NO_WARNINGS
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

int main()
{
	Washing_Machine washing_machine_1;

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
	cout << "Heating temperature = " << washing_machine_1.heating_temperature << endl;

	return 0;
}

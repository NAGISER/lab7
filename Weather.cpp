#include "Weather.h"

void Weather::print()
{
	cout << "�����: " << city << endl;
	cout << "�����: " << lon << endl;
	cout << "������: " << lat << endl;
	cout << "�����������: " << temperature << endl;
	cout << "������: " << weather << endl;
	cout << "�������� �����: " << windSpeed << endl;
	cout << "������: " << clouds << endl;
}

// Lab_03_3.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	66
		double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ������ ����
	if (x <= -2 * R)
		y = R;
	else
		if (-2 * R < x && x <= 0)
			y = -1. / 2. * x;
		else
			if (0 < x && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -(x - 2 * R) / (6 - 2 * R);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;

#include "Building.h"

int main()
{

	// ����������� �������� ����������� �����.
	SetConsoleCP(1251);
	// ����������� �������� ����������� ������.
	SetConsoleOutputCP(1251);

	/* ������ �� ������������ ������������ ������. */
	Building building;

	cout << "��������� �� �������� ������." << endl << "��� ��������� ������ �������� � ������." << endl;
	cout << "������ �� ������������ ������������ ������: " << endl;

	building.inputBuilding();
	building.getBuilding();
	/*............................................*/
	return 0;
}
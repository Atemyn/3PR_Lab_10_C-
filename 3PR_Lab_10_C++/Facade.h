#pragma once
#include <iostream>
using namespace std;

class Facade
{
private:
	int windowsAmount;
	int openedWindowsAmount;
public:
	// ������� �� ������� ��������� ����� ������.
	void setFacade(int windowsAmount, int openedWindowsAmount)
	{
		if (windowsAmount < openedWindowsAmount)
		{
			this->windowsAmount = 0;
			this->openedWindowsAmount = 0;
		}
		else
		{
			this->windowsAmount = windowsAmount;
			this->openedWindowsAmount = openedWindowsAmount;
		}
	}
	// �������, ������������ �������� ���� windowsAmount.
	int getWindowsAmount()
	{
		return windowsAmount;
	}
	// �������, ������������ �������� ���� openedWindowsAmount.
	int getOpenedWindowsAmount()
	{
		return openedWindowsAmount;
	}
	// �������, ��������� ��������� ���� � �������.
	void getFacade()
	{
		cout << "����� ���������� ����: " << windowsAmount << endl;
		cout << "���������� �������� ����: " << openedWindowsAmount << endl;
	}
	// ������� �� ����� �����.
	void inputFacade()
	{
		cout << "������� ����� ���������� ���� ������ ������: ";
		while (!(cin >> windowsAmount) || cin.get() != '\n' || windowsAmount < 0)
		{
			cout << "�������� ���� ���������� ���� - ��� ������ ���� ����� ��������������� ������. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}

		cout << "������� ���������� �������� ���� ������ ������: ";
		while (!(cin >> openedWindowsAmount) || cin.get() != '\n' || openedWindowsAmount < 0 || openedWindowsAmount > windowsAmount)
		{
			cout << "�������� ���� ���������� �������� ���� - ��� ������ ���� �� ������ ���� � �� ������ ������ ����� ����. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}
	}
	// ������� �� �������� ������������� ����� ����.
	void openWindows()
	{
		int windowsToOpen;
		cout << "������� ���������� ����, ������� �� ������ �������: ";
		while (!(cin >> windowsToOpen) || cin.get() != '\n' || windowsToOpen < 0 || windowsToOpen >(windowsAmount - openedWindowsAmount))
		{
			cout << "�������� ���� ���������� ���� ��� �������� - ��� ������ ���� �� ������ ���� � �� ������ ���������� ��� �������� ����� ����. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}

		openedWindowsAmount += windowsToOpen;
	}
	// ������� �� �������� ������������� ����� ����.
	void closeWindows()
	{
		int windowsToClose;
		cout << "������� ���������� ����, ������� �� ������ �������: ";
		while (!(cin >> windowsToClose) || cin.get() != '\n' || windowsToClose < 0 || windowsToClose > openedWindowsAmount)
		{
			cout << "�������� ���� ���������� ���� ��� �������� - ��� ������ ���� �� ������ ���� � �� ������ ����� �������� ����. ���������� ��� ���: ";
			cin.clear();
			rewind(stdin);
		}

		openedWindowsAmount -= windowsToClose;
	}
	// ������� �� �������� ���� �������� ������ Fa?ade.
	void addToFacade(Facade facadeToAdd)
	{
		windowsAmount += facadeToAdd.windowsAmount;
		openedWindowsAmount += facadeToAdd.openedWindowsAmount;
	}
};

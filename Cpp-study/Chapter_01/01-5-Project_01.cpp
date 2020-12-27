#include <iostream>

using namespace std;
const int NAME_LEN = 20;

typedef struct {
	int accID;
	int balance;
	char name[NAME_LEN];
} account;

void printMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAll(void);

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
account accAr[100];
int accNum = 0;

int main(void)
{
	int choice;
	while (1)
	{
		printMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;
		
		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAll();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal Selection.." << endl;
		}
	}
}

void printMenu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount(void)
{
	cout << "[���°���]" << endl;
	cout << "����ID: ";	cin >> accAr[accNum].accID;
	cout << "�� ��: ";	cin >> accAr[accNum].name;
	cout << "�Աݾ�: ";	cin >> accAr[accNum].balance;
	cout << endl;
	accNum++;
}

void DepositMoney(void)
{
	if (accNum == 0)
	{
		cout << "������ ���� ����" << endl << endl;
		return;
	}

	int money;
	int id;

	cout << "[��   ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "�Աݾ�: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accAr[i].accID == id)
		{
			accAr[i].balance += money;
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID" << endl << endl;
}

void WithdrawMoney(void)
{
	if (accNum == 0)
	{
		cout << "������ ���� ����" << endl << endl;
		return;
	}

	int money;
	int id;

	cout << "[��   ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��ݾ�: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accAr[i].accID == id)
		{
			if (accAr[i].balance < money)
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
			accAr[i].balance -= money;
			cout << "��ݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID" << endl << endl;
}

void ShowAll(void)
{
	if (accNum == 0)
	{
		cout << "������ ���� ����" << endl << endl;
		return;
	}

	for (int i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accAr[i].accID << endl;
		cout << "�� ��: " << accAr[i].name << endl;
		cout << "�� ��: " << accAr[i].balance << endl << endl;
	}
}
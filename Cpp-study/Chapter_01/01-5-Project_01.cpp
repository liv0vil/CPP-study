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
		cout << "선택: ";
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
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount(void)
{
	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> accAr[accNum].accID;
	cout << "이 름: ";	cin >> accAr[accNum].name;
	cout << "입금액: ";	cin >> accAr[accNum].balance;
	cout << endl;
	accNum++;
}

void DepositMoney(void)
{
	if (accNum == 0)
	{
		cout << "개설된 계좌 없음" << endl << endl;
		return;
	}

	int money;
	int id;

	cout << "[입   금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "입금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accAr[i].accID == id)
		{
			accAr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID" << endl << endl;
}

void WithdrawMoney(void)
{
	if (accNum == 0)
	{
		cout << "개설된 계좌 없음" << endl << endl;
		return;
	}

	int money;
	int id;

	cout << "[출   금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "출금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accAr[i].accID == id)
		{
			if (accAr[i].balance < money)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			accAr[i].balance -= money;
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID" << endl << endl;
}

void ShowAll(void)
{
	if (accNum == 0)
	{
		cout << "개설된 계좌 없음" << endl << endl;
		return;
	}

	for (int i = 0; i < accNum; i++)
	{
		cout << "계좌ID: " << accAr[i].accID << endl;
		cout << "이 름: " << accAr[i].name << endl;
		cout << "잔 액: " << accAr[i].balance << endl << endl;
	}
}
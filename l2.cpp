//#include <iostream>
//#include <string>
//#include <sstream>
//#include <Windows.h>
//#define size 20
//using namespace std;
//enum facultyultets
//{
//	FIT = 1, HTIT, PIM, IEF
//};
//struct student {
//	string lastName;
//	string name;
//	string otch;
//	string spec;
//	int group;
//	facultyultets faculty;
//	float av_mark;
//	unsigned year : 11;
//};
//
//student st[size];
//student bad;
//
//void menu();
//int current_size = 0;
//void enter_new()//������� ����� ����� ����������
//
//{
//	cout << "���� ����������" << endl;
//	if (current_size < size)
//	{
//		cout << "������ ����� ";
//		cout << current_size + 1;
//		cout << endl << "������� " << endl;
//		cin >> st[current_size].lastName;
//		cout << endl << "���" << endl;
//		cin >> st[current_size].name;
//		cout << endl << "�������� " << endl;
//		cin >> st[current_size].otch;
//		cout << endl << "��� ����������� " << endl;
//		int i; cin >> i;
//		st[current_size].year = i;
//		//cin >> st[current_size].year;
//		cout << endl << "�������������" << endl;
//		cin >> st[current_size].spec;
//		cout << endl << "������ " << endl;
//		cin >> st[current_size].group;
//		cout << endl << "������� ����" << endl;
//		cin >> st[current_size].av_mark;
//		cout << "�������� ���������: ���-1, ����-2, ���-3, ���-4" << endl;
//		int current_positions;
//		cin >> current_positions;
//		switch (current_positions) {
//		case 1: st[current_size].faculty = FIT; break;
//		case 2: st[current_size].faculty = HTIT; break;
//		case 3: st[current_size].faculty = PIM; break;
//		case 4: st[current_size].faculty = IEF; break;
//		default:cout << "������������ �����\n"; break;
//		}
//		current_size++;
//	}
//	else
//		cout << "������� ������������ ���-�� �����";
//	menu();
//}
//
//void del()//������� �������� �����
//{
//	int d;
//	cout << "\n����� ������, ������� ���� ������� (��� �������� ���� ����� ������ 99)" << endl;
//	cin >> d;
//	if (d != 99)
//	{
//		for (int de1 = (d - 1); de1 < size; de1++)
//			st[de1] = st[de1 + 1];
//		int i = 3;
//		i = size - 1;
//	}
//	if (d == 99)
//		for (int i = 0; i < size; i++)
//			st[i] = bad;
//	menu();
//}
//
//void change()//������� ��������� �����
//{
//	int n, per;
//	cout << "\n������� ����� ������" << endl; 	cin >> n;
//	do
//	{
//		cout << "�������: " << endl;
//		cout << "1-��� ��������� �������" << endl;
//		cout << "2-��� ��������� �����" << endl;
//		cout << "3-��� ��������� ��������" << endl;
//		cout << "4-��� ��������� ��� �����������" << endl;
//		cout << "5-��� ��������� ������������� " << endl;
//		cout << "6-��� ��������� ������" << endl;
//		cout << "7-��� ��������� �������� �����" << endl;
//		cout << "8-��� ��������� ���������" << endl;
//		cout << "9-�����\n";
//		cin >> per;
//		switch (per)
//		{
//		case 1: cout << "����� �������";
//			cin >> st[n - 1].lastName;   break;
//		case 2: cout << "����� ���";
//			cin >> st[n - 1].name;   break;
//		case 3: cout << "����� ��������";
//			cin >> st[n - 1].otch;   break;
//		case 4: 		cout << endl << "����� ��� ����������� " << endl;
//			int i; cin >> i;
//			st[n - 1].year = i;  break;
//		case 5: cout << "����� �������������";
//			cin >> st[n - 1].spec;   break;
//		case 6: cout << "����� ������";
//			cin >> st[n - 1].group;   break;
//		case 7: cout << "����� ������� ����";
//			cin >> st[n - 1].av_mark;   break;
//		case 8: cout << "����� �������";
//			cout << "�������� ���������: ���-1, ����-2, ���-3, ���-4" << endl;
//			int current_positions;
//			cin >> current_positions;
//			switch (current_positions) {
//			case 1: st[n - 1].faculty = FIT; break;
//			case 2: st[n - 1].faculty = HTIT; break;
//			case 3: st[n - 1].faculty = PIM; break;
//			case 4: st[n - 1].faculty = IEF; break;
//			default:cout << "������������ �����\n"; break;
//			}
//		}
//	} while (per != 9);
//	menu();
//}
//
//void out()//������� ������ �����
//{
//	int sw, n;
//	cout << "1-����� 1 ������" << endl;
//	cout << "2-����� ���� �����" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "����� ��������� ������ " << endl;   cin >> n;  cout << endl;
//		cout << endl << "�������: " << st[n - 1].lastName << endl;
//		cout << endl << "���: " << st[n - 1].name << endl;
//		cout << endl << "��������: " << st[n - 1].otch << endl;
//		cout << endl << "��� ������������: " << st[n - 1].year << endl;
//		cout << endl << "�������������: " << st[n - 1].spec << endl;
//		cout << endl << "������: " << st[n - 1].group << endl;
//		cout << endl << "������� ����: " << st[n - 1].av_mark << endl;
//		cout << endl << "���������(���-1, ����-2, ���-3, ���-4): " << st[n - 1].faculty << endl;
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << endl << "�������: " << st[i].lastName << endl;
//			cout << endl << "���: " << st[i].name << endl;
//			cout << endl << "��������: " << st[i].otch << endl;
//			cout << endl << "��� ������������: " << st[i].year << endl;
//			cout << endl << "�������������: " << st[i].spec << endl;
//			cout << endl << "������: " << st[i].group << endl;
//			cout << endl << "������� ����: " << st[i].av_mark << endl;
//			cout << endl << "���������(���-1, ����-2, ���-3, ���-4): " << st[i].faculty << endl;
//		}
//	}
//	menu();
//}
//void search() //������� ������ ����������
//{
//	int k;
//	cout << "1- ����� �� �������" << endl;
//	cout << "2 -����� �� ���� �����������" << endl;
//	cout << "3 -����� �� �������� �����" << endl;
//	cout << "4 -����� �� ������" << endl;
//	cin >> k;
//	int check = 0;
//	if (k == 1) {
//		cout << "������� �������" << endl;
//		string familiya;
//		cin >> familiya;
//		for (int i = 0; i < current_size; i++) {
//			if (familiya == st[i].lastName) {
//				check = 1;
//				cout << endl << "�������: " << st[i].lastName << endl;
//				cout << endl << "���: " << st[i].name << endl;
//				cout << endl << "��������: " << st[i].otch << endl;
//				cout << endl << "��� ������������: " << st[i].year << endl;
//				cout << endl << "�������������: " << st[i].spec << endl;
//				cout << endl << "������: " << st[i].group << endl;
//				cout << endl << "������� ����: " << st[i].av_mark << endl;
//				cout << endl << "���������(���-1, ����-2, ���-3, ���-4): " << st[i].faculty << endl;
//			}
//		}
//		if (check == 0) cout << "������� � ����� �������� �� ������" << endl;
//		check = 0;
//	}
//	if (k == 2) {
//		cout << "��� �����������" << endl;
//		int year;
//		cin >> year;
//		for (int i = 0; i < current_size; i++) {
//			if (year == st[i].year) {
//				check = 1;
//				cout << endl << "�������: " << st[i].lastName << endl;
//				cout << endl << "���: " << st[i].name << endl;
//				cout << endl << "��������: " << st[i].otch << endl;
//				cout << endl << "��� ������������: " << st[i].year << endl;
//				cout << endl << "�������������: " << st[i].spec << endl;
//				cout << endl << "������: " << st[i].group << endl;
//				cout << endl << "������� ����: " << st[i].av_mark << endl;
//				cout << endl << "���������(���-1, ����-2, ���-3, ���-4): " << st[i].faculty << endl;
//			}
//		}
//		if (check == 0) cout << "������� � ����� ����� ����������� �� ������ �� ������" << endl;
//		check = 0;
//	}
//	if (k == 3) {
//		float ball;
//		cout << "������� ������� ���� �������\n";
//		cin >> ball;
//		for (int i = 0; i < current_size; i++) {
//			if (ball == st[i].av_mark)
//			{
//				check = 1;
//				cout << endl << "�������: " << st[i].lastName << endl;
//				cout << endl << "���: " << st[i].name << endl;
//				cout << endl << "��������: " << st[i].otch << endl;
//				cout << endl << "��� ������������: " << st[i].year << endl;
//				cout << endl << "�������������: " << st[i].spec << endl;
//				cout << endl << "������: " << st[i].group << endl;
//				cout << endl << "������� ����: " << st[i].av_mark << endl;
//				cout << endl << "���������(���-1, ����-2, ���-3, ���-4): " << st[i].faculty << endl;
//			}
//			if (check == 0) cout << "������ � ����� ������� �� ������" << endl;
//		}
//	}
//	if (k == 4) {
//		cout << "��� �����������" << endl;
//		int group;
//		cin >> group;
//		for (int i = 0; i < current_size; i++) {
//			if (group == st[i].group) {
//				check = 1;
//				cout << endl << "�������: " << st[i].lastName << endl;
//				cout << endl << "���: " << st[i].name << endl;
//				cout << endl << "��������: " << st[i].otch << endl;
//				cout << endl << "��� ������������: " << st[i].year << endl;
//				cout << endl << "�������������: " << st[i].spec << endl;
//				cout << endl << "������: " << st[i].group << endl;
//				cout << endl << "������� ����: " << st[i].av_mark << endl;
//				cout << endl << "���������(���-1, ����-2, ���-3, ���-4): " << st[i].faculty << endl;
//			}
//		}
//		if (check == 0) cout << "������� � ����� ����� ����������� �� ������ �� ������" << endl;
//		check = 0;
//	}
//	cout << "���������� ? (1-��,2-���)" << endl;
//	cin >> k;
//	if (k == 2) menu();
//}
//void menu()// ������� ������ ����
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "�������:" << endl;
//	cout << "1-��� �������� ������" << endl;
//	cout << "2-��� ����� ����� ������" << endl;
//	cout << "3-��� ��������� ������" << endl;
//	cout << "4-��� ������ ������(��)" << endl;
//	cout << "5-��� ������ �������" << endl;
//	cout << "6-��� ������" << endl;
//	int choice;
//	cin >> choice;
//	do
//	{
//		switch (choice)
//		{
//		case 1:  del(); break;
//		case 2:  enter_new(); break;
//		case 3:  change(); break;
//		case 4:  out(); break;
//		case 5:  search(); break;
//		case 6:  exit(0);
//		}
//	} while (choice != 7);
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	menu();
//	return 0;
//}
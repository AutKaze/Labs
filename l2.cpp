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
//void enter_new()//функция ввода новой информации
//
//{
//	cout << "Ввод информации" << endl;
//	if (current_size < size)
//	{
//		cout << "Строка номер ";
//		cout << current_size + 1;
//		cout << endl << "Фамилия " << endl;
//		cin >> st[current_size].lastName;
//		cout << endl << "Имя" << endl;
//		cin >> st[current_size].name;
//		cout << endl << "Отчество " << endl;
//		cin >> st[current_size].otch;
//		cout << endl << "Год поступления " << endl;
//		int i; cin >> i;
//		st[current_size].year = i;
//		//cin >> st[current_size].year;
//		cout << endl << "Специальность" << endl;
//		cin >> st[current_size].spec;
//		cout << endl << "Группа " << endl;
//		cin >> st[current_size].group;
//		cout << endl << "средний балл" << endl;
//		cin >> st[current_size].av_mark;
//		cout << "Выберите факультет: ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4" << endl;
//		int current_positions;
//		cin >> current_positions;
//		switch (current_positions) {
//		case 1: st[current_size].faculty = FIT; break;
//		case 2: st[current_size].faculty = HTIT; break;
//		case 3: st[current_size].faculty = PIM; break;
//		case 4: st[current_size].faculty = IEF; break;
//		default:cout << "неправильное число\n"; break;
//		}
//		current_size++;
//	}
//	else
//		cout << "Введено максимальное кол-во строк";
//	menu();
//}
//
//void del()//функция удаления строк
//{
//	int d;
//	cout << "\nНомер строки, которую надо удалить (для удаления всех строк нажать 99)" << endl;
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
//void change()//функция изменения строк
//{
//	int n, per;
//	cout << "\nВведите номер строки" << endl; 	cin >> n;
//	do
//	{
//		cout << "Введите: " << endl;
//		cout << "1-для изменения фамилии" << endl;
//		cout << "2-для изменения имени" << endl;
//		cout << "3-для изменения отчетсва" << endl;
//		cout << "4-для изменения год поступления" << endl;
//		cout << "5-для изменения специальность " << endl;
//		cout << "6-для изменения группа" << endl;
//		cout << "7-для изменения среднего балла" << endl;
//		cout << "8-для изменения факультет" << endl;
//		cout << "9-конец\n";
//		cin >> per;
//		switch (per)
//		{
//		case 1: cout << "Новая фамилия";
//			cin >> st[n - 1].lastName;   break;
//		case 2: cout << "Новое имя";
//			cin >> st[n - 1].name;   break;
//		case 3: cout << "Новая отчество";
//			cin >> st[n - 1].otch;   break;
//		case 4: 		cout << endl << "Новый Год поступления " << endl;
//			int i; cin >> i;
//			st[n - 1].year = i;  break;
//		case 5: cout << "Новая специальность";
//			cin >> st[n - 1].spec;   break;
//		case 6: cout << "Новые группа";
//			cin >> st[n - 1].group;   break;
//		case 7: cout << "Новый средний балл";
//			cin >> st[n - 1].av_mark;   break;
//		case 8: cout << "Новый предмет";
//			cout << "Выберите факультет: ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4" << endl;
//			int current_positions;
//			cin >> current_positions;
//			switch (current_positions) {
//			case 1: st[n - 1].faculty = FIT; break;
//			case 2: st[n - 1].faculty = HTIT; break;
//			case 3: st[n - 1].faculty = PIM; break;
//			case 4: st[n - 1].faculty = IEF; break;
//			default:cout << "неправильное число\n"; break;
//			}
//		}
//	} while (per != 9);
//	menu();
//}
//
//void out()//функция вывода строк
//{
//	int sw, n;
//	cout << "1-вывод 1 строки" << endl;
//	cout << "2-вывод всех строк" << endl;
//	cin >> sw;
//	if (sw == 1)
//	{
//		cout << "Номер выводимой строки " << endl;   cin >> n;  cout << endl;
//		cout << endl << "Фамилия: " << st[n - 1].lastName << endl;
//		cout << endl << "Имя: " << st[n - 1].name << endl;
//		cout << endl << "Отчество: " << st[n - 1].otch << endl;
//		cout << endl << "Год поуступления: " << st[n - 1].year << endl;
//		cout << endl << "Специальность: " << st[n - 1].spec << endl;
//		cout << endl << "Группа: " << st[n - 1].group << endl;
//		cout << endl << "Средний балл: " << st[n - 1].av_mark << endl;
//		cout << endl << "Факультет(ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4): " << st[n - 1].faculty << endl;
//	}
//	if (sw == 2)
//	{
//		for (int i = 0; i < current_size; i++)
//		{
//			cout << endl << "Фамилия: " << st[i].lastName << endl;
//			cout << endl << "Имя: " << st[i].name << endl;
//			cout << endl << "Отчество: " << st[i].otch << endl;
//			cout << endl << "Год поуступления: " << st[i].year << endl;
//			cout << endl << "Специальность: " << st[i].spec << endl;
//			cout << endl << "Группа: " << st[i].group << endl;
//			cout << endl << "Средний балл: " << st[i].av_mark << endl;
//			cout << endl << "Факультет(ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4): " << st[i].faculty << endl;
//		}
//	}
//	menu();
//}
//void search() //функция поиска информации
//{
//	int k;
//	cout << "1- Поиск по фамилию" << endl;
//	cout << "2 -Поиск по году поступления" << endl;
//	cout << "3 -Поиск по среднему баллу" << endl;
//	cout << "4 -Поиск по группе" << endl;
//	cin >> k;
//	int check = 0;
//	if (k == 1) {
//		cout << "Введите фамилию" << endl;
//		string familiya;
//		cin >> familiya;
//		for (int i = 0; i < current_size; i++) {
//			if (familiya == st[i].lastName) {
//				check = 1;
//				cout << endl << "Фамилия: " << st[i].lastName << endl;
//				cout << endl << "Имя: " << st[i].name << endl;
//				cout << endl << "Отчество: " << st[i].otch << endl;
//				cout << endl << "Год поуступления: " << st[i].year << endl;
//				cout << endl << "Специальность: " << st[i].spec << endl;
//				cout << endl << "Группа: " << st[i].group << endl;
//				cout << endl << "Средний балл: " << st[i].av_mark << endl;
//				cout << endl << "Факультет(ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4): " << st[i].faculty << endl;
//			}
//		}
//		if (check == 0) cout << "Человек с такой фамилией не найден" << endl;
//		check = 0;
//	}
//	if (k == 2) {
//		cout << "Год поступления" << endl;
//		int year;
//		cin >> year;
//		for (int i = 0; i < current_size; i++) {
//			if (year == st[i].year) {
//				check = 1;
//				cout << endl << "Фамилия: " << st[i].lastName << endl;
//				cout << endl << "Имя: " << st[i].name << endl;
//				cout << endl << "Отчество: " << st[i].otch << endl;
//				cout << endl << "Год поуступления: " << st[i].year << endl;
//				cout << endl << "Специальность: " << st[i].spec << endl;
//				cout << endl << "Группа: " << st[i].group << endl;
//				cout << endl << "Средний балл: " << st[i].av_mark << endl;
//				cout << endl << "Факультет(ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4): " << st[i].faculty << endl;
//			}
//		}
//		if (check == 0) cout << "Человек с таким годом поступления не найден не найден" << endl;
//		check = 0;
//	}
//	if (k == 3) {
//		float ball;
//		cout << "Введите средний балл ученика\n";
//		cin >> ball;
//		for (int i = 0; i < current_size; i++) {
//			if (ball == st[i].av_mark)
//			{
//				check = 1;
//				cout << endl << "Фамилия: " << st[i].lastName << endl;
//				cout << endl << "Имя: " << st[i].name << endl;
//				cout << endl << "Отчество: " << st[i].otch << endl;
//				cout << endl << "Год поуступления: " << st[i].year << endl;
//				cout << endl << "Специальность: " << st[i].spec << endl;
//				cout << endl << "Группа: " << st[i].group << endl;
//				cout << endl << "Средний балл: " << st[i].av_mark << endl;
//				cout << endl << "Факультет(ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4): " << st[i].faculty << endl;
//			}
//			if (check == 0) cout << "Ученик с таким средним не найден" << endl;
//		}
//	}
//	if (k == 4) {
//		cout << "Год поступления" << endl;
//		int group;
//		cin >> group;
//		for (int i = 0; i < current_size; i++) {
//			if (group == st[i].group) {
//				check = 1;
//				cout << endl << "Фамилия: " << st[i].lastName << endl;
//				cout << endl << "Имя: " << st[i].name << endl;
//				cout << endl << "Отчество: " << st[i].otch << endl;
//				cout << endl << "Год поуступления: " << st[i].year << endl;
//				cout << endl << "Специальность: " << st[i].spec << endl;
//				cout << endl << "Группа: " << st[i].group << endl;
//				cout << endl << "Средний балл: " << st[i].av_mark << endl;
//				cout << endl << "Факультет(ФИТ-1, ХТИТ-2, ПИМ-3, ИЭФ-4): " << st[i].faculty << endl;
//			}
//		}
//		if (check == 0) cout << "Человек с таким годом поступления не найден не найден" << endl;
//		check = 0;
//	}
//	cout << "Продолжить ? (1-да,2-нет)" << endl;
//	cin >> k;
//	if (k == 2) menu();
//}
//void menu()// функция вызова меню
//{
//	setlocale(LC_CTYPE, "Russian");
//	cout << "Введите:" << endl;
//	cout << "1-для удаления записи" << endl;
//	cout << "2-для ввода новой записи" << endl;
//	cout << "3-для изменения записи" << endl;
//	cout << "4-для вывода записи(ей)" << endl;
//	cout << "5-для поиска записей" << endl;
//	cout << "6-для выхода" << endl;
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
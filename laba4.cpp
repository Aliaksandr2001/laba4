#include <iostream>
#include <locale.h>

using namespace std;

class People {
protected:

	int Rost;
	string rabota;

public:

	People() {
		this->Rost = 0;
		this->rabota = ' ';
	}

	People(int Rost1, string rabota1) {
		this->Rost = Rost1;
		this->rabota = rabota1;
	}

	~People()
	{

	}

	void printPeople() {
		cout << "����: " << this->Rost << endl;
		cout << "������: " << this->rabota << endl;
	}

};

class Trener : virtual public People {

protected:

	int stazh;
	string name;

public:

	Trener() {
		this->stazh = ' ';
		this->name = ' ';
	}

	Trener(int stazh1, string name1) {
		this->stazh = stazh1;
		this->name = name1;
	}

	~Trener()
	{

	}

	void printTrener() {
		cout << "���� �������: " << this->stazh << endl;
		cout << "��� �������: " << this->name << endl;
	}
};

class OsnovnoiSostav : virtual public People {

protected:

	int kol;

public:

	OsnovnoiSostav() {
		this->kol = 0;
	}

	OsnovnoiSostav(int kol1, int shirina1) {
		this->kol = kol1;
	}

	~OsnovnoiSostav()
	{
	
	}

	void printOsnovnoiSostav() {
		cout << "���������� �������: " << kol << endl;
	}

};

class arenda : virtual public Trener {

protected:

	string club;
	int price;

public:

	arenda() {
		this->price = 0;
		this->club = ' ';
	}

	arenda(unsigned int price1, string club1) {
		this->price = price1;
		this->club = club1;
	}

	~arenda()
	{
	
	}

	void printarenda() {
		cout << "����: " << price << endl;
		cout << "����: " << club << endl;
	}
};


class zapas : virtual public OsnovnoiSostav {

protected:

	int timeplay;
	string position;

public:

	zapas() {
		this->timeplay = 0;
		this->position = ' ';
	}

	zapas(int timeplay1, string position1) {
		this->timeplay = timeplay1;
		this->position = position1;
	}

	~zapas()
	{
	
	}

	void printzapas() {
		cout << "����� ����:" << timeplay << endl;
		cout << "������� :" << position << endl;
	}
};

class Football : virtual public arenda, virtual public zapas {
protected:

	int kolClub;
	int godSozdania;

public:

	Football() {
		this->kolClub = ' ';
		this->godSozdania = 0;
	}

	Football(int kolClub1, int godSozdania1, int Rost1, string rabota1, int stazh1, string name1,
		int kol1, int price1, string club1, int timeplay1, string position1) {
		this->kolClub = kolClub1;
		this->godSozdania = godSozdania1;
		this->Rost = Rost1;
		this->rabota = rabota1;
		this->stazh = stazh1;
		this->name = name1;
		this->kol = kol1;
		this->price = price1;
		this->club = club1;
		this->timeplay = timeplay1;
		this->position = position1;

	}

	void printFootball() {
		cout << "���������� ������ : " << kolClub << endl;
		cout << "��� �������� : " << godSozdania << endl;
	}

	~Football()
	{
	
	}

};



int main()
{
	setlocale(LC_ALL, "Russian");


	int kolClub1; int godSozdania1 = 0; string rabota1; int stazh1; string name1; string club1; string position1;
	int Rost1 = 0; int kol1 = 0; int price1;
	int timeplay1 = 0;

	cout << endl << "___________����" << endl;
	bool a = true;
	do
	{
		cout << "���� :";
		cin >> Rost1;
		if (cin.fail() || Rost1 <= 0)
			cout << "��������� �������" << endl;
		else
			a = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a);
	bool a1 = true;
	do
	{
		cout << "������ :";
		cin >> rabota1;
		if (cin.fail())
			cout << "��������� �������" << endl;
		else
			a1 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a1);



	cout << endl << "___________������" << endl;
	bool a2 = true;
	do
	{
		cout << "���� :";
		cin >> stazh1;
		if (cin.fail() || stazh1 <= 0)
			cout << "��������� �������" << endl;
		else
			a2 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a2);
	bool a3 = true;
	do
	{
		cout << "��� ������� :";
		cin >> name1;
		if (cin.fail())
			cout << "��������� �������" << endl;
		else
			a3 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a3);



	cout << endl << "___________�������� ������" << endl;
	bool a4 = true;
	do
	{
		cout << "���������� ������� :";
		cin >> kol1;
		if (cin.fail() || kol1 <= 0)
			cout << "��������� �������" << endl;
		else
			a4 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a4);


	cout << endl << "___________������ � ������" << endl;
	bool a5 = true;
	do
	{
		cout << "���� :";
		cin >> price1;
		if (cin.fail())
			cout << "��������� �������" << endl;
		else
			a5 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a5);
	bool a6 = true;
	do
	{
		cout << "���� :";
		cin >> club1;
		if (cin.fail())
			cout << "��������� �������" << endl;
		else
			a6 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a6);



	cout << endl << "___________������ ������" << endl;
	bool a7 = true;
	do
	{
		cout << "����� ���� :";
		cin >> timeplay1;
		if (cin.fail() || timeplay1 <= 0)
			cout << "��������� �������" << endl;
		else
			a7 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a7);
	bool a8 = true;
	do
	{
		cout << "������� ������ :";
		cin >> position1;
		if (cin.fail())
			cout << "��������� �������" << endl;
		else
			a8 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a8);



	cout << endl << "___________������" << endl;
	bool a9 = true;
	do
	{
		cout << "���������� ������ :";
		cin >> kolClub1;
		if (cin.fail() || kolClub1 <= 0)
			cout << "��������� �������" << endl;
		else
			a9 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a9);
	bool a10 = true;
	do
	{
		cout << "��� �������� :";
		cin >> godSozdania1;
		if (cin.fail() || godSozdania1 <= 0)
			cout << "��������� �������" << endl;
		else
			a10 = false;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
	} while (a10);

	Football foot(kolClub1, godSozdania1, Rost1, rabota1, stazh1, name1,
		kol1, price1, club1, timeplay1, position1);

	cout << endl;

	system("pause");

	foot.printPeople();
	foot.printTrener();
	foot.printOsnovnoiSostav();
	foot.printarenda();
	foot.printzapas();
	foot.printFootball();
}
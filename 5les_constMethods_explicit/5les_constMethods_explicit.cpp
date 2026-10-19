#include <iostream>
using namespace std;

//class Date {
//public:
//	int day;
//	int month;
//	int year;
//	void setDay(int day) { 
//		this->day = day;
//	}
//	int getDay()const {
//		return day;
//	}
//	void print() {
//		cout << "date: " << day << "/" << month << "/" << year << endl;
//	}
//};
//class Acount {
//private:
//	double sum;
//	const double rate;
//
//public:
//
//	Acount(double suma,double rate):rate(rate)
//	{
//		this->sum = sum;
//	}
//
//	double getRate()const {
//		return rate;
//	}
//
//	//double getIncome() {
//	//	return sum * rate / 100;
//	//}
//	double getIncome() {
//		return sum * rate / 100;
//	}
//	double getIncome()const {
//		return sum * rate / 100;
//	}
//
//	double getSum()const {
//		return sum;
//	}
//
//	double setSum() {
//		sum += getIncome();
//		return sum;
//	}
//};
//void something(long number) {
//
//}
//float something() { return 1.5; }
//class Array {
//	int* arr;
//	int size;
//public:
//	explicit Array(int size)
//	{
//		this->size = size;
//		arr = new int[size];
//	}
//	~Array()
//	{
//		if (arr != nullptr)
//		{
//			delete[] arr;
//		}
//	}
//	int getSize()const {																																				
//		return size;
//	}
//	int getValue(int index) {
//		return arr[index];
//	}
//	void setValue(int num, int index) {
//		arr[index] = num;
//	}
//	void display(int index)const {
//		cout << arr[index] << " ";
//	}
//};
//
//void printArray(const Array &arr) {
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		arr.display(i);
//	}
//	cout << endl;
// }

//1

//class Book {
//	string author;
//	string title;
//	string publisher;
//	int year;
//	int pageAmount;
//
//public:
//	Book()
//	{
//		author = "no author";
//		title = "no title";
//		publisher = "no publisher";
//		year = 0;
//		pageAmount = 0;
//	}
//
//	explicit Book(string author)
//	{
//		this->author = author;
//		title = "no title";
//		publisher = "no publisher";
//		year = 0;
//		pageAmount = 0;
//	}
//	Book(string author,string title,string publisher,int year,int pageAmount):Book(author)
//	{
//		this->title = title;
//		this->publisher = publisher;
//		this->year = year;
//		this->pageAmount = pageAmount;
//	}
//
//	void print()const {
//		cout << "title:" << title << endl;
//		cout << "author:" << author << endl;
//		cout << "publisher:" << publisher << endl;
//		cout << "year:" << year << endl;
//		cout << "pageAmount:" << pageAmount << endl;
//		cout << "===================================" << endl;
//	}
//
//	string getAuthor()const {
//		return author;
//	}
//	string getPublisher()const {
//		return publisher;
//	}
//	int getYear()const {
//		return year;
//	}
//};
//
//
//
//class Library {
//	Book* books;
//	int countBooks;
//
//public:
//
//	Library()
//	{
//		books = nullptr;
//		countBooks = 0;
//	}
//	void addBook(Book b) {
//		Book* temp = new Book[countBooks + 1];
//
//		for (int i = 0; i < countBooks; i++)
//		{
//			temp[i] = books[i];
//		}
//		temp[countBooks] = b;
//
//		delete[]books;
//		books = temp;
//		countBooks++;
//	}
//	void printAll()const {
//		for (int i = 0; i < countBooks; i++)
//		{
//			books[i].print();
//		}
//	}
//	void printByAuthor(string author)const {
//		bool found = 0;
//		for (int i = 0; i < countBooks; i++)
//		{
//			if (books[i].getAuthor() == author)
//			{
//				cout << "book below is found by author" << endl;
//				books[i].print();
//				found = 1;
//			}
//		}
//		if (found != 1)
//		{
//			cout << "author not found" << endl;
//		}
//	}
//	void printByPublisher(string publisher)const {
//		bool found = 0;
//		for (int i = 0; i < countBooks; i++)
//		{
//			if (books[i].getPublisher() == publisher)
//			{
//				cout << "book below is found by publisher" << endl;
//				books[i].print();
//				found = 1;
//			}
//		}
//		if (found != 1)
//		{
//			cout << "publisher not found" << endl;
//		}
//	}
//	void printAfterYear(int y)const {
//		for (int i = 0; i < countBooks; i++)
//		{
//			if (books[i].getYear() >= y)
//			{
//				cout << "book below is found by year" << endl;
//				books[i].print();
//			}
//		}
//	}
//};

//2
class Worker {
	string name;
	string surname;
	string middlename;
	string position;
	int yearOfEmployment;
	int salary;
public:
	Worker()
	{
		name = "no name";
		surname = "no surname";
		middlename = "no middlename";
		position = "no position";
		yearOfEmployment = 0;
		salary = 0;
	}
	explicit Worker(string name)
	{
		this->name = name;
		surname = "no surname";
		middlename = "no middlename";
		position = "no position";
		yearOfEmployment = 0;
		salary = 0;
	}
	Worker(string name, string surname, string middlename, string position, int yearOfEmployment, int salary) :Worker(name)
	{
		this->surname = surname;
		this->middlename = middlename;
		this->position = position;
		this->yearOfEmployment = yearOfEmployment;
		this->salary = salary;
	}
	void print()const {
		cout << "name: " << name << endl;
		cout << "surname: " << surname << endl;
		cout << "middlename: " << middlename << endl;
		cout << "position: " << position << endl;
		cout << "yearOfEmployment: " << yearOfEmployment << endl;
		cout << "salary: " << salary << endl;
		cout << "==================================" << endl;
	}
	int getYear()const {
		return yearOfEmployment;
	}
	int getSalary()const {
		return salary;
	}
	string getPosition()const {
		return position;
	}
	};



	class WorkerData {
		Worker* workers;
		int countWorkers;
	public:
		WorkerData()
		{
			workers = nullptr;
			countWorkers = 0;
		}

		void addWorker(Worker w) {
			Worker* temp = new Worker[countWorkers + 1];
			for (int i = 0; i < countWorkers; i++)
			{
				temp[i] = workers[i];
			}
			temp[countWorkers] = w;

			delete[]workers;
			workers = temp;
			countWorkers++;
		}

		void printByYear(int year,int currentYear)const {
			for (int i = 0; i < countWorkers; i++)
			{
				if (currentYear-workers[i].getYear() > year)
				{
					cout << "worker below is found by year" << endl;
					workers[i].print();
				}
			}
		}
		void printBySalary(int salary)const {
			for (int i = 0; i < countWorkers; i++)
						{
							if (workers[i].getSalary() > salary)
							{
								cout << "worker below is found by salary" << endl;
								workers[i].print();
							}
						}
		}
		void printByPosition(string pos)const {
			bool found = 0;
					for (int i = 0; i < countWorkers; i++)
					{
						if (workers[i].getPosition() == pos)
						{
							cout << "worker below is found by position" << endl;
							workers[i].print();
							found = 1;
						}
					}
					if (found != 1)
					{
						cout << "worker not found" << endl;
					}
		}
		~WorkerData() {
			delete[]workers;
		}
	};

	int main()
	{
		//2

		Worker w1("sanya", "popov", "petrovich", "plitka", 1996, 15000);
		Worker w2("bodya", "wipar", "mihalich", "brukivka", 2000, 18000);
		Worker w3("mihail", "zubenko", "petrovich", "mafiozi", 2025, 150000);

		WorkerData d1;
		d1.addWorker(w1);
		d1.addWorker(w2);
		d1.addWorker(w3);
		d1.printByYear(29,2026);
		d1.printBySalary(100000);
		d1.printByPosition("brukivka");



		//1
		//Book b1("donald","duck","sonyachni",1991,800);
		//Book b2("ojoj","qwerty","pes",900,100);
		//Book b3("malii","44","sonyachni",2014,400);

		//Library l1;
		//l1.addBook(b1);
		//l1.addBook(b2);
		//l1.addBook(b3);
		//l1.printByAuthor("ojoj");
		//l1.printByPublisher("sonyachni");
		//l1.printAfterYear(2000);
		//l1.printAll();











		//int size = 4;
		//Array arr(size);
		//for (int i = 0; i < arr.getSize(); i++)
		//{
		//	arr.setValue( size - i,i);
		//}
		//printArray(arr);
		//cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
		//printArray(8);//implicit int->Array

		//Array a = 100;
		//printArray(a);



		//int a = 3.14;//implicit double->int
		//cout << a << endl;

		//double b(10);//implicit int->double
		//cout << b << endl;
		//something(5);//IMPLICIT LONG->int

		//float pi = (float)3.14;//explicit




		//Acount account1(2000, 5);
		//const Acount account2(5000, 8);

		//cout << account1.getRate() << endl;
		//cout << account2.getRate() << endl;

		//cout << account1.getSum() << endl;
		//cout << account2.getSum() << endl;

		//cout << account1.getIncome() << endl;
		//cout << account2.getIncome() << endl;

		//cout << account1.setSum() << endl;
		////cout << account2.setSum() << endl;









		//const int size = 5;
		//const int months[3]{31,31,28};

		//Date holidayDate{ 25,10,2026 };

		//holidayDate.print();

		//holidayDate.day = 31;
		//holidayDate.print();

		//const Date independenceDay{ 24,8,2027 };
		////independenceDay.print();
		////independenceDay.day = 25;
		////independenceDay.print();
		//independenceDay.getDay();
	}



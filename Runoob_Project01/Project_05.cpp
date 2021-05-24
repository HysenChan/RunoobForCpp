#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void displayBook(Books& book);

void createBook(Books& book1, Books& book2);

int main()
{
	Books book1;
	Books book2;

	createBook(book1, book2);

	displayBook(book1);
	displayBook(book2);

	return 0;
}

void createBook(Books& book1, Books& book2)
{
	strcpy_s(book1.title, "C++�̳�");
	strcpy_s(book1.author, "AAA");
	strcpy_s(book1.subject, "Computer Language");
	book1.book_id = 100;

	strcpy_s(book2.title, "Java�̳�");
	strcpy_s(book2.author, "BBB");
	strcpy_s(book2.subject, "Computer Language");
	book2.book_id = 101;
}

void displayBook(Books& book)
{
	// ��� Book ��Ϣ
	cout << left << setw(4) << "���� : " << book.title << endl;
	cout << left << setw(4) << "���� : " << book.author << endl;
	cout << left << setw(4) << "��Ŀ : " << book.subject << endl;
	cout << left << setw(4) << "ID : " << book.book_id << endl;
	cout << endl;
}

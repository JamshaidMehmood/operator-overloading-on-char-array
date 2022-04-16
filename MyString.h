#ifndef MYSTRING_H
#define MYSTRING_H
#include<iostream>
using namespace std;
class MyString
{
private:
	char* str;
	int length;
public:
	MyString();
	MyString(const char*);
	MyString(const MyString&);
	void display()const;
	~MyString();
	int getlength()const;
	const MyString& operator=(const MyString&);
	friend ostream& operator <<(ostream&, MyString&);
	MyString operator+(const MyString&)const;
	const MyString& operator+=(const MyString&);
	bool operator==(const MyString&)const;
	bool operator<(const MyString&)const;
	bool operator<=(const MyString&)const;
	void setStr(const char*);
	operator int();
	operator char* ();
	MyString operator++();
	friend istream& operator >>(istream&, MyString&);
};
#endif // !MYSTRING_H

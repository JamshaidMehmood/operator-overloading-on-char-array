#include<iostream>
#include"MyString.h"
#include<cstring>
using namespace std;
MyString::MyString()         //task 1
{

	length = 0;
	str = new char[length + 1];
	strcpy(str, "");
}
MyString::MyString(const char* s)         //task 2
{

	length = strlen(s);
	str = new char[length + 1];
	strcpy(str, s);
}
MyString::~MyString()         //task 3
{
	if (str != 0)
	{
		delete[]str;
		str = 0;
	}
}
void MyString::display()const         //task 4
{
	cout << "String ::" << str << "   Length ::" << length << endl;
}
int MyString::getlength()const         //task 5
{
	return length;
}
MyString::MyString(const MyString& orig)         //task 6 copy constructer
{
	if (orig.str != NULL)
	{
		length = orig.length;
		str = new char[length + 1];
		strcpy(str, orig.str);
	}
	else
	{
		str = NULL;
	}
}
const MyString& MyString::operator=(const MyString& rhs)    //task 7
{
	if (this == &rhs)
	{
		return *this;
	}
	else
	{

		if (str != 0)
		{
			delete[]str;
			str = 0;
		}
		length = rhs.length;
		str = new char[length + 1];
		strcpy(str, rhs.str);
		return *this;
	}

}
ostream& operator <<(ostream& out, MyString& temp)   //task  8
{
	out << temp.str << endl;
	return out;
}

MyString MyString::operator+(const MyString& s)const   //task 9 
{
	int d1 = 0;
	MyString dummy;
	if (dummy.str != 0)
	{
		delete dummy.str;
		dummy.str = 0;
	}
	dummy.length = s.length + length;
	dummy.str = new char[dummy.length + 1];
	for (int i = 0; i < length; i++)
	{
		dummy.str[i] = str[i];
		//d1++;
	}
	d1 = length;
	for (int i = 0; i < s.length; i++)
	{
		dummy.str[d1] = s.str[i];
		d1++;
	}
	dummy.str[d1] = '\0';
	return dummy;

}
bool MyString::operator==(const MyString& rhs)const  //task 10
{
	int dummy = 0;
	if (rhs.length != length)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			if (rhs.str[i] != str[i])
			{
				dummy = 0;
				break;
			}
			else
			{
				dummy = 1;
			}
		}

	}

	if (dummy == 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool MyString::operator<(const MyString& rhs)const    //task 11
{
	int dummy = -1;
	if (str == NULL)
	{
		return true;
	}
	if(rhs.str == NULL)
	{
		return false;
	}
	if (str != NULL && rhs.str != NULL)
	{
		if (length > rhs.length)
		{
			for (int i = 0; i < length; i++)
			{
				if (i < rhs.length)
				{
					if (str[i] < rhs.str[i])
					{
						dummy = 1;
						break;
					}
				
				}
				else
				{
					dummy = 0;
				}
			}
			if (dummy == 1)
			{
				return true;
			}
			else if (dummy == 0)
			{
				return false;
			}
		}
		//----------------------------------------------------------
		else if (length < rhs.length)
		{
			for (int i = 0; i < rhs.length; i++)
			{
				if (i < length)
				{
					if (str[i] < rhs.str[i])
					{
						dummy = 1;
						break;
					}
					
				}
				else
				{
					dummy = 0;
				}
			}
			if (dummy == 1)
			{
				return true;
			}
			else if (dummy == 0)
			{
				return false;
			}
		}
		else
		{
			for (int i = 0; i < length; i++)
			{
				if (str[i] < rhs.str[i])
				{
					dummy = 1;
					break;
				}
				else
				{
					dummy = 0;
				}
			}
			if (dummy == 1)
			{
				return true;
			}
			else if (dummy == 0)
			{
				return false;
			}

		}
	}
	
	/*
	int dummy = -1;
	if (str != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			if (str[i] < rhs.str[i])
			{
				dummy = 1;
				break;
			}
			else
			{
				dummy = 0;
			}
		}
	}
	if (dummy == 1)
	{
		return true;
	}
	else if (dummy == 0)
	{
		return false;
	}

	else
	{
		return true;
	}
	*/
	
}
bool MyString::operator<=(const MyString& rhs)const    //task 12  
{
	
	int dummy = -1;
	if (rhs.str == NULL)
	{
		return false;
	}
	if (str != NULL && rhs.str != NULL)
	{
			for (int i = 0; i < length; i++)
			{
				if (str[i] <= rhs.str[i])
				{
					if (i != (rhs.length - 1)) 
					{
						dummy = 1;
					}
					else
					{
						break;
					}
				}

				else
				{
					dummy = 0;
				}
			}
	}
	if (dummy == 1)
	{
		return true;
	}
	if (dummy == 0)
	{
		return false;
	}
	if (dummy == -1)
	{
		return true;
	}
	
}
const MyString& MyString::operator+=(const MyString& s)  //task 13
{
	int d1 = 0, d2 = 0;
	d2 = length; //this length
	char* na = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		na[i] = str[i];
	}
	length = length + s.length;
	if (length != s.length)
	{
		delete[]str;
		str = 0;
		str = new char[length + 1];
	}

	for (int i = 0; i < d2; i++)
	{
		str[i] = na[i];
		//d1++;
	}
	d1 = d2;
	for (int i = 0; i < s.length; i++)
	{
		str[d1] = s.str[i];
		d1++;
	}

	str[d1] = '\0';   //it should be placed in the case of character array or string itherwise garbage value will be in your output 

	delete[]na;
	na = 0;
	return *this;
}

void MyString::setStr(const char* c)    //task 14
{
	if (str != 0)
	{
		delete[]str;
		str = 0;
	}
	str = new char[strlen(c) + 1];
	strcpy(str, c);
}
MyString::operator int()   //task 15 
{
	int dummy = 0, d1, d2 = 0;
	for (int i = 0; i < length; i++)
	{
		if (str[i] < 48 || str[i]>57)
		{
			d2 = 1;
			//break;
			i = length;
		}
	}
	if (d2 == 0)
	{
		for (int i = 0; i < length; i++)
		{
			d1 = str[i] - '0';
			dummy = dummy * 10 + d1;

		}
		return dummy;
	}
	else if (d2 == 1)
	{
		return dummy;
	}
}
MyString::operator char* ()   //task 16 conversion operator
{
	char* na = new char[length + 1];
	strcpy(na, str);
	return na;
}
MyString MyString ::operator++() //task 17
{
	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return *this;
}
istream& operator >>(istream& in, MyString& temp) //task 18
{
	if (temp.str != 0)
	{
		delete[]temp.str;
		temp.str = 0;
	}
	temp.str = new char[101];
	in.getline(temp.str, 101); //because as mentioned that user an only enter 100 characters
	return in;
}

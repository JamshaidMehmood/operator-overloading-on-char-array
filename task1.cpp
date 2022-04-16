//Jamshaid mehmood
//Bitf20m032
//IT MORNING

#include <iostream>
#include <cstring>
#include"MyString.h"
using namespace std;
int main()
{

	MyString s1;    //for task 1
	s1.display();    //for task 4
	cout << "_______________________________________" << endl;
	MyString s2("OOP is Fun!!");    //for task 2
	s2.display();    //for task 4
	cout << "_______________________________________" << endl;
	char name[15] = "Pakistan";    //for task 2
	MyString s3(name);
	s3.display();    //for task 4
	cout << "_______________________________________" << endl;
	char name1[15] = "Pakistan";
	MyString s4(name1);
	cout << s4.getlength() << endl;    //for task 5
	cout << "_______________________________________" << endl;
	s1 = s2;    //for task 7
	s1.display();
	cout << "_______________________________________" << endl;
	MyString s5("OOP is not always Fun!!");
	cout << s3 << s1 << s5;   //task 8
	cout << "_______________________________________" << endl;


	MyString ms1("One");
	MyString ms2("Two");
	MyString ms3("Three");
	MyString ms4;
	ms4 = ms1 + ms2 + ms3;  //for task 9
	cout << ms1;
	cout << ms2;
	cout << ms3;
	cout << ms4;
	cout << "________________________________________" << endl;

	MyString b1("One");
	MyString b2("Two");
	MyString b3("Three");
	MyString a1("abc");   //task 10
	MyString a2("ABC");
	cout << (a1 == a2) << endl;
	MyString a3("az");   //task 10
	MyString a4("abc");
	cout << (a3 == a4) << endl;
	cout << (a1 == a4) << endl;
	cout << "_______________________________________1" << endl;
	MyString j1("az");   //task 11
	MyString j2("abcde");
	MyString j3("az");   //task 11
	MyString j4("abc");
	MyString j5("\0");
	cout << (j1 < j2) << endl;//task 11
	cout << (j1 < j4) << endl;
	cout << (j1 < j3) << endl;
	cout << (j2 < j1) << endl;
	cout << (j5 < j1) << endl;
	cout << (a1 < a2) << endl;
	cout << (a2 < a1) << endl;
	cout << (a1 < a3) << endl;
	cout << "_______________________________________2" << endl;
	cout << (j1 <= j2) << endl;//task 12
	cout << (j1 <= j4) << endl;
	cout << (j1 <= j3) << endl;
	cout << (j2 <= j1) << endl;
	cout << (j5 <= j1) << endl;
	cout << (a1 <= a3) << endl;
	cout << (a1 <= a4) << endl;
	cout << (a2 <= a2) << endl;
	cout << "_______________________________________3" << endl;
	MyString j("Hellow");// for task 14
	cout << j << endl;
	j.setStr("Welcome to OOP");
	cout << j << endl;
	cout << "_______________________________________" << endl;
	b1 += b2 += b3;
	b1.display();
	b2.display();
	b3.display();
	cout << "_______________________________________" << endl;
	MyString z1("1832");
	MyString z2("56 jam");
	int i1 = z1;
	int i2 = z2;
	cout << i1 << endl;
	cout << i2 << endl;
	cout << "_______________________________________" << endl;
	MyString n1("Hello World");
	cout << n1;
	char* cp = n1;
	cout << cp << endl;   //for this the <<operator of us do not executes 
	delete[]cp;
	cp = 0;
	cout << n1;
	cout << "_______________________________________" << endl;
	MyString n2("One !#^; 123 two");
	MyString n3;
	MyString n4;
	n3 = ++n2;
	n4 = ++n1;
	n1.display();
	n2.display();
	n3.display();
	cout << "_______________________________________" << endl;
	MyString k1("Hello");
	cout << k1;
	cout << "Enter mystring :";
	cin >> k1;
	cout << k1;
	return 0;

}

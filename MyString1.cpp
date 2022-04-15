#include "MyString1.h"
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>
#include <sstream>


using namespace std;

	
	void MyString1::setStr1(string value)
	{
		str1 = value;
	}
	void MyString1::setStr2(string value)
	{
		str2 = value;
	}
	bool MyString1::Init(string str1, string str2)
	{
		setStr1(str1);
		setStr2(str2);
		return true;
		 
	}
	void MyString1::Display()const
	{
			cout << " Str1 = " << str1 << endl;
			cout << " Str2 = " << str2 << endl;
	}
	void MyString1::Read()
	{
		string str1;
		string str2;
		cout << " Str1 =  "; cin >> str1;
		do
		{
			cout << " Str2=  "; cin >> str2;
			
		} while (!Init(str1 ,str2));
	}
	void MyString1::Assign()                              
	{
		cout << "резельтат присвоювання рядку str1 елементи рядка str2.      STR1=" << (str1 = str2) << endl;
		
	}
	void MyString1:: Konkaten()
    {
		cout << "результат конкотенации двох рядкив=" << str1 + str2 << endl;
		cout << endl;

		
		
	}
	

	void MyString1::Compare()     //порівняння рядків
	{
		cout << str1.compare(str2) << endl;
		cout << " 0  - якщо рядок STR1  ривний  STR2;" << endl;
		cout << " 1   - якщо  рядок STR1  бильший  STR2;" << endl;  
		cout << " -1   - якщо  рядок STR1  менший  STR2;" << endl;

	} 



	
	
	void MyString1::NumertoString(int value)   //перетворення числа цілого чи дійсного типу у літерний рядок;
	{
		int x;  
		x = value;
		int d;
		string str = "";
		char c = 0;
		while (x != 0)
		{
			d = x % 10;  // виділяємо кожну цифру окремо
			x = x / 10;    //
			c = char(d + 48); //перетворюємо число в символ( код цифри в таблиці ASKI)
			str =c+ str ;  //конкотенація символів.
		}
		cout <<"виводимо результат перетворення числа в литерний рядок  " <<str << endl;
	}
	void MyString1::StringtoNumer()
	{
		int x=0;
		int y = 0;
		int d = 1;
		int sum = 0;
		for (int i = str1.length()-1; i >=0 ; i--) // виділяємо кожен символ окремо
		{
			y = (int)str1[i] - 48;  //перетворюємо символи в цифри
			   //
				sum = y * d + sum;  
				d = d * 10;
			cout <<" виводимо результат перетворення вмісту рядка в число цилого типу     " << (int)str1[i] - 48 << endl;
		}
	}







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
		cout << "��������� ������������ ����� str1 �������� ����� str2.      STR1=" << (str1 = str2) << endl;
		
	}
	void MyString1:: Konkaten()
    {
		cout << "��������� ������������ ���� ������=" << str1 + str2 << endl;
		cout << endl;

		
		
	}
	

	void MyString1::Compare()     //��������� �����
	{
		cout << str1.compare(str2) << endl;
		cout << " 0  - ���� ����� STR1  ������  STR2;" << endl;
		cout << " 1   - ����  ����� STR1  �������  STR2;" << endl;  
		cout << " -1   - ����  ����� STR1  ������  STR2;" << endl;

	} 



	
	
	void MyString1::NumertoString(int value)   //������������ ����� ������ �� ������� ���� � ������� �����;
	{
		int x;  
		x = value;
		int d;
		string str = "";
		char c = 0;
		while (x != 0)
		{
			d = x % 10;  // �������� ����� ����� ������
			x = x / 10;    //
			c = char(d + 48); //������������ ����� � ������( ��� ����� � ������� ASKI)
			str =c+ str ;  //������������ �������.
		}
		cout <<"�������� ��������� ������������ ����� � �������� �����  " <<str << endl;
	}
	void MyString1::StringtoNumer()
	{
		int x=0;
		int y = 0;
		int d = 1;
		int sum = 0;
		for (int i = str1.length()-1; i >=0 ; i--) // �������� ����� ������ ������
		{
			y = (int)str1[i] - 48;  //������������ ������� � �����
			   //
				sum = y * d + sum;  
				d = d * 10;
			cout <<" �������� ��������� ������������ ����� ����� � ����� ������ ����     " << (int)str1[i] - 48 << endl;
		}
	}







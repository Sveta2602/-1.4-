
#pragma once
#include <iostream>

#include <iomanip>
#include <string>
#include <stdio.h>
#include <tchar.h>
using namespace std;

class MyString1
{
private:
	
	string str1;
	string str2;
public:
	string getStr1() const { return this->str1; }
	string getStr2() const { return this->str2; }
	void setStr1(string);
	void setStr2(string);
	
	void Display()const;
	void Read();
	bool Init(string str1, string str2);
	void Assign();
	void Konkaten( );
	
	 void Compare();
	 
	 void StringtoNumer();
	 void NumertoString(int value);

};


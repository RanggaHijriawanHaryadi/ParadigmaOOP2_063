#include<iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur) 
	{
		cout << "orang dibuat dengan umur" << umur << "\n" << endl;
	}
};

class perkerja : public orang {
public:
	perkerja(int pUmur) :
		orang(pUmur)
	{
		cout << "perkerja dibuat\n" << endl;
	}
};

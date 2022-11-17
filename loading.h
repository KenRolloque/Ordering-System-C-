#pragma once
#include <iostream>

using namespace std;
class loading
{
public:
	int i = 0;

	void myLoading() {

	

		cout << "\t\t\t\tLoading" << endl << endl;
		cout << "\t\t";
		for ( i = 0; i < 50; i++) {

			cout << "\xb1";

			for (long j = 0; j < 16000000; j++)
			{

			}
		}
		cout << endl;

		system("CLS");

	
	}
};


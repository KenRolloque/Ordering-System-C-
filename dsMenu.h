#pragma once
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct MyStruct
{
	string dessert[100] = {};
	int dsTimes = 0;
	double dsPrice[100]= {};

};

class dsMenu
{
	MyStruct p;

	public:


	void dessertMenu() {


		cout << "\n\t\t[3] Dessert"<<endl;
		bool repeat = true;
		bool dupl = true;

		while (repeat == true)
		{
			do {

				cout << "\n\t\tEnter Dessert [" << p.dsTimes << "]: ";
				//getline(cin, dessert[dsTimes]);
				//cin >> dessert[dsTimes];
				//cin.ignore();
				getline(cin.ignore(), p.dessert[p.dsTimes]);

				cout << "\t\tEnter Price: ";
				cin >> p.dsPrice[p.dsTimes];
				cout << endl;

				transform(p.dessert[p.dsTimes].begin(), p.dessert[p.dsTimes].end(), p.dessert[p.dsTimes].begin(), ::toupper);


				// Find the duplicae dessert
				if (p.dsTimes > 0) {

					for (int i = p.dsTimes; i >= 0; i--) {
						for (int j = i - 1; j >= 0; j--) {

							if (p.dessert[i] == p.dessert[j]) {
								cout << "\n\t\tIt already exists. Please try again\n" << endl;
								p.dsTimes -= 1;
								dupl = true;
							}
							else {
								dupl = false;
							}
						}
					}
				}
				dupl = false;
			} while (dupl == true);


		cont:
			int choice;
			cout << "\n\t\t[1] Continue" << endl;
			cout << "\t\t[2] Stop" << endl;
			cout << "\t\t";
			cin >> choice;

			if (choice == 1) {
				p.dsTimes++;
				repeat = true;

			}
			else if (choice == 2) {
				p.dsTimes++;
				repeat = false;
				break;

			}
			else {
				cout << "\t\t Please Try Again" << endl;
				goto cont;
			}



		}
	}

	void displayDs() {

		cout << "\t\t****** Dessert Menu ******" << endl << endl;
		for (int i = 0; i <= p.dsTimes - 1; i++) {
			cout << "\t\t[" << i + 1 << "] Php. " << p.dsPrice[i] << "\t" << p.dessert[i] << endl;
		}
	}


};


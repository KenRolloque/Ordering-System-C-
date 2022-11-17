#pragma once
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


struct MyStruct3
{
	string drinks[50] = {};
	int drTimes = 0 ;
	double drPrice[50] = {};
	
};

class drMenu
{
	MyStruct3 p;
	
	public:


	void drinksMenu() {


		cout <<"\n\t\t[2] Drinks" << endl;
		bool repeat = true;
		bool dupl = true;

		while (repeat == true)
		{
			do {

				cout << "\n\t\tEnter Drinks [" <<p.drTimes << "]: ";
				getline(cin.ignore(), p.drinks[p.drTimes]);
			

				cout << "\t\tEnter Price: ";
				cin >> p.drPrice[p.drTimes];
				cout << endl;
				transform(p.drinks[p.drTimes].begin(), p.drinks[p.drTimes].end(), p.drinks[p.drTimes].begin(), ::toupper);


				// Find the duplicae drinks
				if (p.drTimes > 0) {

					for (int i = p.drTimes; i >= 0; i--) {
						for (int j = i - 1; j >= 0; j--) {

							if (p.drinks[i] == p.drinks[j]) {
								cout << "\n\t\tIt already exists. Please try again\n" << endl;
								p.drTimes -= 1;
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
				p.drTimes++;
				repeat = true;
				dupl = true;
			}
			else if (choice == 2) {
				p.drTimes++;
				repeat = false;
				break;

			}
			else {
				cout << "\t\t Please Try Again" << endl;
				goto cont;
			}



		}
		
	}
	
	void displayDr() {

		//drinksMenu( drinks, drPrice);
		system("CLS");
		cout << "\t\t****** Drinks Menu ******" << endl << endl;
		for (int x = 0; x <= p.drTimes - 1; x++) {
			cout << "\t\t[" << x + 1 << "] Php. " << p.drPrice[x] << "\t" << p.drinks[x] << endl;
		}
		
	}
	


};


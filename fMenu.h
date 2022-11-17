#pragma once
#include <algorithm> // tranform to uppercase
#include <iostream>
#include <string>

using namespace std;



struct MyStruct2
{
	string food[100]= {};
	int fTimes = 0;
	double price[100]= {};

};
class fMenu{
	
	
	MyStruct2 p;
 public :
	 
	

	void foodMenu() {

		bool repeat = true;
		bool dupl = true;
		cout << "\n\t\t[1] Food" << endl;

		while (repeat == true) {

			do {
				cout << "\n\t\t\tEnter Food Name: [" << p.fTimes << "] :";
				//getline(cin, food[fTimes]);
				//cin >> food[fTimes];
				//cin.get();
				getline(cin.ignore(), p.food[p.fTimes]);

				cout << "\t\t\tEnter Price: ";
				cin >> p.price[p.fTimes];
				cout << endl;
				transform(p.food[p.fTimes].begin(), p.food[p.fTimes].end(), p.food[p.fTimes].begin(), ::toupper);


				// Find the duplicate food
				if (p.fTimes > 0) {

					for (int i = p.fTimes; i >= 0; i--) {
						for (int j = i - 1; j >= 0; j--) {

							if (p.food[i] == p.food[j]) {
								cout << "\n\t\tIt already exists. Please try again\n" << endl;
								p.fTimes -= 1;
								dupl = true;
							}
							else {
								dupl = false;
							}
						}
					}
				}
				
				dupl = false;
				
		}while (dupl == true);



	cont:
		
		int choice;
		cout << "\n\t\t\t[1] Continue" << endl;
		cout << "\t\t\t[2] Stop" << endl;
		cout << "\t\t\t";
		cin >> choice;

		if (choice == 1) {
			p.fTimes++;
			repeat = true;
			dupl = true;
			

		}
		else if (choice == 2) {
			p.fTimes++;
			repeat = false;
			break;

		}
		else {
			
			cout << "\t\t\t Please Try Again" << endl;
			goto cont;
		}
		
		
	}// while
	}
	

	void displayF() {


		cout << "\t\t****** Food Menu ******" << endl << endl;
		for (int i = 0; i <= p.fTimes - 1; i++) {
			cout << "\t\t[" << i + 1 << "] Php. " << p.price[i] << "\t" << p.food[i] << endl;
		}

	}


	
};


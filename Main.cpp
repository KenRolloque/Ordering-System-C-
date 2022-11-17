
#include <iostream>
#include <algorithm>
#include <conio.h>
//#include "fMenu.h"
//#include "drMenu.h"
//#include "dsMenu.h"
#include "loading.h"
//#include "OrderFood.h"

//#include "password.h"
#include <string>
#include <stdlib.h>

using namespace std;


//void crPass();


int main()
{

        // fMenu myFood;
       //  drMenu myDrinks;
       //  dsMenu myDessert;
         loading newLoading;
      //  OrderFood newOrder_food;
        // password myPassword;

     

         string food[50] = {};
         int fTimes = 0;
         double price[50] = {};
        


 
    cout << "\t\t++++++++++++++++++++++++++++++++ " << endl;
    cout << "\t\t\t Ordering System " << endl;
    cout << "\t\t++++++++++++++++++++++++++++++++ " << endl<<endl<<endl<<endl;



/*
    string name;
    string street, barangay, municipality, province;

    cout << "\n\t\t Restaurant Name: ";
    getline(cin, name);

    cout << "\n\n\t\t\t ******* Address ******* "<<endl;
    cout << "\n\t\tStreet: ";
    getline(cin, street);

    cout << "\t\tBarangay: ";
    getline(cin, barangay);

    cout << "\t\tMunicipality: ";
    getline(cin, municipality);

    cout << "\t\tProvince / City: ";
    getline(cin, province);
    cout << endl << endl << endl;



    system("CLS");
    cout << "\n\n\t\t\t"<<name << endl<<endl<<endl;
    */

  

    bool process = false;
    bool menu = true;
    do{


    create:

    cout << "\t\t--------------------------------" << endl;
    cout << "\t\t********* Create Menu *********" << endl;
    cout << "\t\t--------------------------------" << endl;

    int choice;

    cout << "\t\t [1] Food " << endl;
    cout << "\t\t [2] Drinks " << endl;
    cout << "\t\t [3] Dessert " << endl;
    cout << "\t\t [4] Create Menu " << endl;
    cout << "\t\t";
    cin>>choice;



    if (choice == 1) {

        bool repeat = true;
        bool dupl = true;
       // myFood.foodMenu();
        cout << "\n\t\t[1] Food" << endl;

        while (repeat == true) {

            do {
                cout << "\n\t\t\tEnter Food Name: [" <<  fTimes << "] :";
                //getline(cin, food[fTimes]);
                //cin >> food[fTimes];
                //cin.get();
                getline(cin.ignore(),  food[ fTimes]);

                cout << "\t\t\tEnter Price: ";
                cin >>  price[ fTimes];
                cout << endl;
                transform( food[ fTimes].begin(),  food[ fTimes].end(),  food[ fTimes].begin(), ::toupper);


                // Find the duplicate food
                if ( fTimes > 0) {

                    for (int i =  fTimes; i >= 0; i--) {
                        for (int j = i - 1; j >= 0; j--) {

                            if ( food[i] ==  food[j]) {
                                cout << "\n\t\tIt already exists. Please try again\n" << endl;
                                 fTimes -= 1;
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
            cout << "\n\t\t\t[1] Continue" << endl;
            cout << "\t\t\t[2] Stop" << endl;
            cout << "\t\t\t";
            cin >> choice;

            if (choice == 1) {
                 fTimes++;
                repeat = true;
                dupl = true;


            }
            else if (choice == 2) {
                 fTimes++;
                repeat = false;
                break;

            }
            else {

                cout << "\t\t\t Please Try Again" << endl;
                goto cont;
            }


        }// while
        system("CLS");
       // myFood.displayF();
        cout << endl << endl;



        menu = true; 
        process = true;
  

    }
    else if (choice == 2) {

       // myDrinks.drinksMenu();
        system("CLS");
       // myDrinks.displayDr();
        cout << endl<<endl;
        menu = true;
        process = true;
      

    }
    else if (choice == 3) {
        
       // myDessert.dessertMenu();
        system("CLS");
       // myDessert.displayDs();
        cout << endl << endl;
        menu = true;
        process = true;
    }

    else if (choice == 4) {


        if (process == false) {

            cout << "\n\n\t\t!! Failed to Enter Menu !!" << endl;
            goto  create;
        }

        menu = false;
        system("CLS");
        newLoading.myLoading();
        system("CLS");
        newLoading.myLoading();
     
        break;
               

    }
    else {
        
        cout << "\t\t Invalid Choice" << endl;
        menu = true;
    }
    } while (menu == true);

    cout << endl << endl;
  //  myDrinks.displayDr();
    cout << endl << endl;
   // myFood.displayF();
    cout << endl << endl;
   // myDessert.displayDs();

    
 
    
    // for food order
    int myOrder[90][90] = {};
    int Rfood = 0;
    int Cfood = 0;
    int ordFood_pieces[90] = {};
    int selection;
    int process_2;
    int hold = 0;
    bool a = true;
    bool b = true;
  
    int choice_MainMenu;

    cout << "\n\n\t\t Main Menu: " << endl;

    cout << "\n\t\t\t[1] Order" << endl;
    cout << "\t\t\t[2] Update Menu" << endl;
    cout << "\t\t\t[3] Sales" << endl;
    cout << "\t\t\t[4] Log out" << endl;
    cout << "\t\t\t";
    cin >> choice_MainMenu;

    switch (choice_MainMenu)
    {

    case 1:

        system("CLS");
        do {
            cout << "\t\t [ Order ]:" << endl;
            cout << "\n\t\t\t [1] Food" << endl;
            cout << "\t\t\t [2] Drinks" << endl;
            cout << "\t\t\t [3] Dessert" << endl;
            cout << "\t\t\t [4] Main Menu " << endl;
            cout << "\t\t\t";
            cin >> selection;


            if (selection == 1) {

                while (a == true) {
                    cout << "\t\t\t Enter Number Code of Food [" << Cfood << "]: ";
                    cin >> myOrder[Rfood][Cfood];

                    cout << "\t\t\t Enter Number of Food: ";
                    cin >> ordFood_pieces[Cfood];

                    cout << "\n\t\t\t Order: ";


                cont2:

                    cout << "\n\n\t\t\t [1] Continue" << endl;
                    cout << "\t\t\t [2] Stop " << endl;
                    cout << "\t\t\t [3] Cancel " << endl;
                    cout << "\t\t\t";
                    cin >> process_2;


                   
                  if ( process_2 == 1){

                        Cfood++;
                        hold++;
                        a = true;
                        
                  }else if (process_2 == 2){
             

                        Cfood++;
                        a = false;
                        break;
                  }else if ( process_2 == 3){

                        Cfood -= hold;
                        hold = 0;
                        b = true;

                  }else{
                        cout << "\t\t\t Invalid Input" << endl << endl;
                        goto cont2;
                        break;
                  }

                }//while loop


            }



        } while (b == true);// while


    default:
        break;
    }








}









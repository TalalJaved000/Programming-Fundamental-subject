#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int Total = 1000; // Total Size of Pharmacy
    int index = 10;

    //---------- Medicines Database ---------
    string medName[Total] = {"Panadol", "Brufen", "Melatonin", "Fentanyl", "Morphine", "Vicodin", "Percocet", "Carfentanyl", "Imodium", "Dolophine"};
    int medPrice[Total] = {50, 40, 400, 320, 670, 690, 960, 1500, 500, 240};
    int medStock[Total] = {50, 50, 20, 6, 7, 6, 9, 4, 8, 7};

    // Bill System
    string billName[Total];
    int billQty[Total];
    int billPrice[Total];
    int billIndex = 0;

    // --------CRUD (Create, Read, Update, Delete)--------
    while (true)
    {
        // ----------Main Header----------
        system("cls");
        cout << "=====================================================" << endl;
        cout << "--------------Pharmacy Mangement System--------------" << endl;
        cout << "=====================================================" << endl;

        cout << " User Menu " << endl;
        cout << " 1. Pharmacist " << endl;
        cout << " 2. Customer " << endl;
        cout << " 3. Exit" << endl;
        cout << " Choose Option : ";
        int useroption;
        cin >> useroption;

        cout << " You Chose : " << useroption << endl;

        if (useroption == 1)
        {
            //---------- Write the pharmacist code ----------
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Pharmacist Menu : Login Attempt : " << i + 1 << endl;
                cout << " Enter username : ";
                string username;
                cin >> username;
                cout << " Enter Password : ";
                int password;
                cin >> password;

                if (username == "Pharmacist" && password == 1234)
                {
                    cout << " Succesfully Logged In " << endl;
                    while (true)
                    {
                        // ------------ Pharmacist Menu ------------
                        system("cls");
                        cout << " 1. Show all Medicines " << endl;
                        cout << " 2. Add Medicine " << endl;
                        cout << " 3. Search Medicine " << endl;
                        cout << " 4. Update Medicine " << endl;
                        cout << " 5. Delete Medicine " << endl;
                        cout << " 6. Logout " << endl;
                        cout << " Choose Option : ";
                        int adminoption;
                        cin >> adminoption;

                        // ------------ Show All Medicines ------------
                        if (adminoption == 1)
                        {
                            cout << " Name\t\t\tPrice in Pkr\t\tStock (units) " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (medName[i] != "")
                                {
                                    if (medName[i].length() < 8)
                                    {
                                        cout << medName[i] << "\t\t\t" << medPrice[i] << "\t\t\t" << medStock[i] << endl;
                                    }
                                    else if (medName[i].length() < 12)
                                    {
                                        cout << medName[i] << "\t\t" << medPrice[i] << "\t\t\t" << medStock[i] << endl;
                                    }
                                    else
                                    {
                                        cout << medName[i] << "\t" << medPrice[i] << "\t\t\t" << medStock[i] << endl;
                                    }
                                }
                            }
                        }

                        // ------------ Add Medicine ------------
                        else if (adminoption == 2)
                        {
                            if (index < Total)
                            {
                                cout << " Enter the name of medicine : ";
                                cin >> medName[index];
                                cout << " Enter the Price(Pkr) of medicine : ";
                                cin >> medPrice[index];
                                cout << " Enter Stock (units) : ";
                                cin >> medStock[index];
                                index++;
                                cout << " Medicine Added ";
                            }
                        }

                        // ------------ Search Medicine ------------
                        else if (adminoption == 3)
                        {
                            cout << " Enter medicine name : ";
                            string name;
                            cin >> name;
                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (medName[i] == name)
                                {
                                    cout << " Medicine " << medName[i] << " Found " << endl;
                                    cout << " Price " << medPrice[i] << " Pkr " << endl;
                                    cout << " Stock " << medStock[i] << " units " << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << " Medicine not found " << endl;
                            }
                        }

                        // ------------ Update Medicine ------------
                        else if (adminoption == 4)
                        {
                            cout << " Enter medicine name : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (medName[i] == name)
                                {
                                    cout << " Old Price : " << medPrice[i] << endl;
                                    cout << " Enter new price : ";
                                    cin >> medPrice[i];
                                    cout << " Old Stock (units) : " << medStock[i] << endl;
                                    cout << " Update Stock (units) : ";
                                    cin >> medStock[i];

                                    cout << " Updated succcessfully " << endl;
                                    found = true;
                                }
                            }
                            if (!found)
                            {
                                cout << " Medicine not found " << endl;
                            }
                        }

                        // ------------Delete Medicine ------------
                        else if (adminoption == 5)
                        {
                            cout << " Enter medicine name : ";
                            string name;
                            cin >> name;
                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (medName[i] == name)
                                {
                                    medName[i] = "";
                                    medPrice[i] = 0;
                                    medStock[i] = 0;

                                    cout << " Deleted successfully " << endl;
                                    found = true;
                                }
                            }
                            if (!found)
                            {
                                cout << " Medicine not found " << endl;
                            }
                        }

                        // Logout
                        else if (adminoption == 6)
                        {
                            break;
                        }
                        else
                        {
                            cout << " You chose the wrong option " << endl;
                        }
                        cout << " Press any key to continue " << endl;
                        getch();
                    }

                    break;
                }
                else
                {
                    cout << " Username or Password is invalid " << endl;
                    cout << " Press any key to continue " << endl;
                    getch();
                }
            }
        }
        // -------------Customer Menu-----------------
        else if (useroption == 2)
        {
            billIndex = 0;
            int total = 0;

            while (true)
            {
                system("cls");
                cout << " ==========Customer Menu========== " << endl;
                cout << " 1. View Medicines " << endl;
                cout << " 2. Buy Medicine " << endl;
                cout << " 3. View Bill " << endl;
                cout << " 4. Exit " << endl;

                cout << " Choose Option : ";
                int customoption;
                cin >> customoption;

                if (customoption == 1)
                // ------------ View Medicines ------------
                {
                    cout << " Name\t\t\tPrice in Pkr\t\tStock (units) " << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (medName[i] != "" && medStock[i] > 0)
                        {
                            if (medName[i].length() < 8)
                            {
                                cout << medName[i] << "\t\t\t" << medPrice[i] << "\t\t\t" << medStock[i] << endl;
                            }
                            else if (medName[i].length() < 12)
                            {
                                cout << medName[i] << "\t\t" << medPrice[i] << "\t\t\t" << medStock[i] << endl;
                            }
                            else
                            {
                                cout << medName[i] << "\t" << medPrice[i] << "\t\t\t" << medStock[i] << endl;
                            }
                        }
                    }
                }

                else if (customoption == 2)
                // ------------ Buy Medicine ------------
                {
                    cout << " Enter medicine name : ";
                    string name;
                    cin >> name;
                    for (int i = 0; i < index; i++)
                    {
                        if (medName[i] == name)
                        {
                            cout << " Enter quantity : ";
                            int qty;
                            cin >> qty;
                            if (qty <= medStock[i])
                            {
                                billName[billIndex] = medName[i];
                                billQty[billIndex] = qty;
                                billPrice[billIndex] = medPrice[i] * qty;
                                total += billPrice[billIndex];
                                billIndex++;

                                medStock[i] -= qty;

                                cout << " Medicine added to bill " << endl;
                            }
                            else
                            {
                                cout << " Only " << medStock[i] << " units available in stock " << endl;
                            }
                        }
                        else if (medName[i] != name)
                        {
                            cout << " Medicine not found " << endl;
                            break;
                        }
                    }
                }

                else if (customoption == 3)
                // ---------- View Bill -------------
                {
                    cout << " Name\t\tQuantity\tPrice " << endl;
                    for (int i = 0; i < billIndex; i++)
                    {
                        if (billName[i] != "")
                        {
                            cout << billName[i] << "\t\t" << billQty[i] << "\t\t" << billPrice[i] << endl;
                        }
                    }
                    cout << " Total : " << total << " Pkr " << endl;
                }

                else if (customoption == 4)
                // ------------ Exit -----------
                {
                    break;
                }
                else
                {
                    cout << " You chose the wrong option " << endl;
                }
                cout << " Press any key to continue " << endl;
                getch();
            }
        }

        else if (useroption == 3)
        {
            break;
        }
        else
        {
            cout << " You entered the wrong option " << endl;
        }
        cout << " Press any key to continue " << endl;
        getch();
    }

    cout << endl;
    cout << " Thank You for Visiting this Pharmacy " << endl;
    return 0;
}
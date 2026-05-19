#include <iostream>
#include <string>
#include <fstream> // added for file handling
#include <conio.h>

using namespace std;

//  CONSTANTS

const int MAX_SIZE = 1000;
const int MAX_BILL = 1000;
const int MAX_TRIES = 3;
const string FILE_NAME = "medicines.txt"; // file where all medicines are saved

//  MEDICINE DATABASE  (parallel arrays)

string medName[MAX_SIZE];
int medPrice[MAX_SIZE];
int medStock[MAX_SIZE];
int medCount = 0;

//  BILL  (parallel arrays, reset per customer)

string billName[MAX_BILL];
int billQty[MAX_BILL];
int billPrice[MAX_BILL];
int billCount = 0;
int billTotal = 0;

void pauseScreen()
{
    cout << "\n Press any key to continue..." << endl;
    getch();
}

void clearScreen()
{
    system("cls");
}

void printBanner()
{
    cout << "=====================================================" << endl;
    cout << "-------------- Pharmacy Management System -----------" << endl;
    cout << "=====================================================" << endl;
}

int findMedicine(string name)
{
    for (int i = 0; i < medCount; i++)
    {
        if (medName[i] == name)
            return i;
    }
    return -1;
}

// ══════════════════════════════════════════════
//  FILE HANDLING FUNCTIONS
// ══════════════════════════════════════════════

void saveToFile()
{
    ofstream file(FILE_NAME); // open file for writing

    if (!file)
    {
        cout << " Error: Could not open file for saving." << endl;
        return;
    }

    for (int i = 0; i < medCount; i++)
    {
        // skip deleted (soft-deleted) entries
        if (medName[i] != "")
        {
            file << medName[i] << " " << medPrice[i] << " " << medStock[i] << endl;
        }
    }

    file.close();
}

void loadFromFile()
{
    ifstream file(FILE_NAME); // open file for reading

    if (!file)
    {
        // file does not exist yet – will be created after defaults are loaded
        return;
    }

    medCount = 0; // reset before reading

    while (file >> medName[medCount] >> medPrice[medCount] >> medStock[medCount])
    {
        medCount++;

        if (medCount >= MAX_SIZE)
            break;
    }

    file.close();
}

//  DISPLAY FUNCTIONS

void printMedicineRow(string name, int price, int stock)
{
    if (name.length() < 8)
        cout << name << "\t\t\t" << price << "\t\t\t" << stock << endl;
    else if (name.length() < 12)
        cout << name << "\t\t" << price << "\t\t\t" << stock << endl;
    else
        cout << name << "\t" << price << "\t\t\t" << stock << endl;
}

void printMedicineHeader()
{
    cout << "\n Name\t\t\tPrice (PKR)\t\tStock (units)" << endl;
    cout << " -------------------------------------------------------" << endl;
}

void showAllMedicines()
{
    printMedicineHeader();
    for (int i = 0; i < medCount; i++)
    {
        if (medName[i] != "")
            printMedicineRow(medName[i], medPrice[i], medStock[i]);
    }
}

void showAvailableMedicines()
{
    printMedicineHeader();
    for (int i = 0; i < medCount; i++)
    {
        if (medName[i] != "" && medStock[i] > 0)
            printMedicineRow(medName[i], medPrice[i], medStock[i]);
    }
}

// ══════════════════════════════════════════════
//  PHARMACIST CRUD FUNCTIONS
// ══════════════════════════════════════════════

void addMedicine()
{
    if (medCount >= MAX_SIZE)
    {
        cout << " Database is full. Cannot add more medicines." << endl;
        return;
    }

    cout << " Enter medicine name  : ";
    cin >> medName[medCount];
    cout << " Enter price (PKR)    : ";
    cin >> medPrice[medCount];
    cout << " Enter stock (units)  : ";
    cin >> medStock[medCount];

    medCount++;

    saveToFile();
    cout << " Medicine added successfully." << endl;
}

void searchMedicine()
{
    cout << " Enter medicine name : ";
    string name;
    cin >> name;

    int idx = findMedicine(name);

    if (idx == -1)
    {
        cout << " Medicine not found." << endl;
        return;
    }

    cout << " Medicine : " << medName[idx] << endl;
    cout << " Price    : " << medPrice[idx] << " PKR" << endl;
    cout << " Stock    : " << medStock[idx] << " units" << endl;
}

void updateMedicine()
{
    cout << " Enter medicine name : ";
    string name;
    cin >> name;

    int idx = findMedicine(name);

    if (idx == -1)
    {
        cout << " Medicine not found." << endl;
        return;
    }

    cout << " Current price : " << medPrice[idx] << " PKR" << endl;
    cout << " New price     : ";
    cin >> medPrice[idx];

    cout << " Current stock : " << medStock[idx] << " units" << endl;
    cout << " New stock     : ";
    cin >> medStock[idx];

    saveToFile();
    cout << " Updated successfully." << endl;
}

void deleteMedicine()
{
    cout << " Enter medicine name : ";
    string name;
    cin >> name;

    int idx = findMedicine(name);

    if (idx == -1)
    {
        cout << " Medicine not found." << endl;
        return;
    }

    medName[idx] = "";
    medPrice[idx] = 0;
    medStock[idx] = 0;

    saveToFile();
    cout << " Deleted successfully." << endl;
}

// ══════════════════════════════════════════════
//  PHARMACIST LOGIN & MENU
// ══════════════════════════════════════════════

bool checkLogin(string username, int password)
{
    return (username == "Pharmacist" && password == 1234);
}

void runPharmacistMenu()
{
    while (true)
    {
        clearScreen();
        cout << "\n ===== Pharmacist Menu =====" << endl;
        cout << " 1. Show all medicines" << endl;
        cout << " 2. Add medicine" << endl;
        cout << " 3. Search medicine" << endl;
        cout << " 4. Update medicine" << endl;
        cout << " 5. Delete medicine" << endl;
        cout << " 6. Logout" << endl;
        cout << " Choose option : ";

        int option;
        cin >> option;

        if (option == 1)
            showAllMedicines();
        else if (option == 2)
            addMedicine();
        else if (option == 3)
            searchMedicine();
        else if (option == 4)
            updateMedicine();
        else if (option == 5)
            deleteMedicine();
        else if (option == 6)
            break;
        else
            cout << " Invalid option." << endl;

        pauseScreen();
    }
}

void runPharmacistLogin()
{
    for (int attempt = 1; attempt <= MAX_TRIES; attempt++)
    {
        clearScreen();
        cout << " Pharmacist Login Attempt " << attempt
             << " of " << MAX_TRIES << endl;

        string username;
        int password;

        cout << " Username : ";
        cin >> username;
        cout << " Password : ";
        cin >> password;

        if (checkLogin(username, password))
        {
            cout << " Login successful!" << endl;
            runPharmacistMenu();
            return;
        }

        cout << " Invalid username or password." << endl;
        pauseScreen();
    }

    cout << " Too many failed attempts. Returning to main menu." << endl;
    pauseScreen();
}

// ══════════════════════════════════════════════
//  CUSTOMER BILL FUNCTIONS
// ══════════════════════════════════════════════

void resetBill()
{
    for (int i = 0; i < billCount; i++)
    {
        billName[i] = "";
        billQty[i] = 0;
        billPrice[i] = 0;
    }
    billCount = 0;
    billTotal = 0;
}

void buyMedicine()
{
    cout << " Enter medicine name : ";
    string name;
    cin >> name;

    int idx = findMedicine(name);

    if (idx == -1)
    {
        cout << " Medicine not found." << endl;
        return;
    }

    cout << " Enter quantity : ";
    int qty;
    cin >> qty;

    if (qty > medStock[idx])
    {
        cout << " Only " << medStock[idx] << " units available." << endl;
        return;
    }

    // add to bill
    billName[billCount] = medName[idx];
    billQty[billCount] = qty;
    billPrice[billCount] = medPrice[idx] * qty;
    billTotal += billPrice[billCount];
    billCount++;

    medStock[idx] -= qty;

    saveToFile();
    cout << " Added to bill." << endl;
}

void printBill()
{
    cout << "\n ===== Your Bill =====" << endl;
    cout << " Name\t\t\tQty\tPrice (PKR)" << endl;
    cout << " -------------------------------------------" << endl;

    for (int i = 0; i < billCount; i++)
    {
        if (billName[i] != "")
            cout << " " << billName[i] << "\t\t\t"
                 << billQty[i] << "\t"
                 << billPrice[i] << endl;
    }

    cout << " -------------------------------------------" << endl;
    cout << " Total : " << billTotal << " PKR" << endl;
}

// ══════════════════════════════════════════════
//  CUSTOMER MENU
// ══════════════════════════════════════════════

void runCustomerMenu()
{
    resetBill();

    while (true)
    {
        clearScreen();
        cout << "\n ===== Customer Menu =====" << endl;
        cout << " 1. View medicines" << endl;
        cout << " 2. Buy medicine" << endl;
        cout << " 3. View bill" << endl;
        cout << " 4. Exit" << endl;
        cout << " Choose option : ";

        int option;
        cin >> option;

        if (option == 1)
            showAvailableMedicines();
        else if (option == 2)
            buyMedicine();
        else if (option == 3)
            printBill();
        else if (option == 4)
            break;
        else
            cout << " Invalid option." << endl;

        pauseScreen();
    }
}

//  DATA INITIALISATION

void initMedicines()
{
    loadFromFile(); // try to read from file first

    if (medCount == 0) // file was empty or did not exist
    {
        // hard-coded starter inventory (only used on the very first run)
        string names[] = {"Panadol", "Brufen", "Melatonin", "Fentanyl", "Morphine",
                          "Vicodin", "Percocet", "Carfentanyl", "Imodium", "Dolophine"};
        int prices[] = {50, 40, 400, 320, 670, 690, 960, 1500, 500, 240};
        int stocks[] = {50, 50, 20, 6, 7, 6, 9, 4, 8, 7};
        int defaultCount = 10;

        for (int i = 0; i < defaultCount; i++)
        {
            medName[i] = names[i];
            medPrice[i] = prices[i];
            medStock[i] = stocks[i];
        }
        medCount = defaultCount;

        saveToFile(); // create the file for the first time
        cout << " No save file found. Default medicines loaded and saved." << endl;
        pauseScreen();
    }
}

//  MAIN

int main()
{
    initMedicines();

    while (true)
    {
        clearScreen();
        printBanner();

        cout << "\n Main Menu" << endl;
        cout << " 1. Pharmacist" << endl;
        cout << " 2. Customer" << endl;
        cout << " 3. Exit" << endl;
        cout << " Choose option : ";

        int choice;
        cin >> choice;

        if (choice == 1)
            runPharmacistLogin();
        else if (choice == 2)
            runCustomerMenu();
        else if (choice == 3)
            break;
        else
        {
            cout << " Invalid option." << endl;
            pauseScreen();
        }
    }

    cout << "\n Thank you for visiting the pharmacy. Goodbye!" << endl;
    return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int TOTAL_STUDENTS = 1000; // total size
    int index = 8;

    // data structures
    string nameArrays[TOTAL_STUDENTS] = {"Ali", "Ammar", "Sara", "Zaid", "Hina", "Omar", "Fatima", "Bilal"};
    int ageArrays[TOTAL_STUDENTS] = {20, 21, 19, 22, 20, 21, 19, 23};
    float matricArrays[TOTAL_STUDENTS] = {1007, 1042, 980, 1055, 1023, 998, 1067, 1011};
    float interArrays[TOTAL_STUDENTS] = {1029, 1105, 1075, 1098, 1034, 1060, 1112, 1045};
    float ecatArrays[TOTAL_STUDENTS] = {298, 338, 312, 345, 289, 320, 355, 301};
    float aggriArrays[TOTAL_STUDENTS];
    string pref1Arrays[TOTAL_STUDENTS] = {"CS", "SE", "EE", "CS", "SE", "CS", "EE", "SE"};
    string pref2Arrays[TOTAL_STUDENTS] = {"SE", "CS", "CS", "EE", "CS", "EE", "CS", "CS"};
    string pref3Arrays[TOTAL_STUDENTS] = {"EE", "EE", "SE", "SE", "EE", "SE", "SE", "EE"};
    string departmentArrays[TOTAL_STUDENTS];

    // CRUD (Create, Read, Update, Delete)
    while (true)
    {
        // main header
        system("cls");
        cout << " ------------------------------------------------------------" << endl;
        cout << " -----------University Admission Management System-----------" << endl;
        cout << " ------------------------------------------------------------" << endl;

        cout << " User Menu " << endl;
        cout << " 1. Admin " << endl;
        cout << " 2. Student " << endl;
        cout << " 3. Exit " << endl;
        cout << " Choose Option : ";
        int userOption;
        cin >> userOption;

        cout << " You chose : " << userOption << endl;

        if (userOption == 1)
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin Menu : Login Attempt : " << i + 1 << endl;
                cout << " Enter username : ";
                string username;
                cin >> username;
                cout << " Enter password : ";
                int password;
                cin >> password;

                if (username == "admin" && password == 1234)
                {
                    cout << " Successfully logged in " << endl;
                    while (true)
                    {
                        system("cls");
                        cout << " 1. Show all students " << endl;
                        cout << " 2. Search student " << endl;
                        cout << " 3. Update student record " << endl;
                        cout << " 4. Generate merit list " << endl;
                        cout << " 5. Delete Record by name " << endl;
                        cout << " 6. Logout " << endl;
                        cout << " Choose the option : ";
                        int adminOption;
                        cin >> adminOption;

                        if (adminOption == 1)
                        {
                            cout << " Name\tAge\tMatric\tFsc\tECAT\tPref1\tPref2\tPref3 " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArrays[i] != "")
                                {
                                    cout << nameArrays[i] << "\t" << ageArrays[i] << "\t" << matricArrays[i] << "\t" << interArrays[i] << "\t" << ecatArrays[i] << "\t" << pref1Arrays[i] << "\t" << pref2Arrays[i] << "\t" << pref3Arrays[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 2)
                        {
                            // search student by name
                            cout << " Enter name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArrays[i] == name)
                                {
                                    cout << " Name\tAge\tMatric\tFsc\tECAT\tPref1\tPref2\tPref3 " << endl;
                                    cout << nameArrays[i] << "\t" << ageArrays[i] << "\t" << matricArrays[i] << "\t" << interArrays[i] << "\t" << ecatArrays[i] << "\t" << pref1Arrays[i] << "\t" << pref2Arrays[i] << "\t" << pref3Arrays[i] << endl;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << " Record not found against name " << name << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // update student record
                            cout << " Enter name you want to update : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArrays[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "------Old Record------" << endl;
                                cout << " Name\tAge\tMatric\tFsc\tECAT\tPref1\tPref2\tPref3 " << endl;
                                cout << nameArrays[i] << "\t" << ageArrays[i] << "\t" << matricArrays[i] << "\t" << interArrays[i] << "\t" << ecatArrays[i] << "\t" << pref1Arrays[i] << "\t" << pref2Arrays[i] << "\t" << pref3Arrays[i] << endl;
                                cout << " Enter new Record " << endl;
                                cout << " Enter your name : ";
                                string name;
                                cin >> name;
                                cout << " Enter your age : ";
                                int age;
                                cin >> age;
                                cout << " Enter your matric marks ";
                                float matric;
                                cin >> matric;
                                cout << " Enter your Fsc marks : ";
                                float inter;
                                cin >> inter;
                                cout << " Enter your ECAT marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << " Enter CS, SE, or EE as your prefrence " << endl;
                                cout << " Enter your 1st prefrence : ";
                                string pref1;
                                cin >> pref1;
                                cout << " Enter your 2nd prefrence : ";
                                string pref2;
                                cin >> pref2;
                                cout << " Enter your 3rd prefrence : ";
                                string pref3;
                                cin >> pref3;

                                nameArrays[foundindex] = name;
                                ageArrays[foundindex] = age;
                                matricArrays[foundindex] = matric;
                                interArrays[foundindex] = inter;
                                ecatArrays[foundindex] = ecat;
                                pref1Arrays[foundindex] = pref1;
                                pref2Arrays[foundindex] = pref2;
                                pref3Arrays[foundindex] = pref3;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArrays[i] / 1200 * 100 * 0.3 + interArrays[i] / 1200 * 100 * 0.4 + ecatArrays[i] / 400 * 100 * 0.3;
                                aggriArrays[i] = aggri;
                            }

                            // sorting data on basis of aggrigate
                            for (int i = 0; i < index - 1; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggriArrays[i] < aggriArrays[j])
                                    {
                                        // swap name
                                        string tempName = nameArrays[i];
                                        nameArrays[i] = nameArrays[j];
                                        nameArrays[j] = tempName;
                                        // swap age
                                        int tempAge = ageArrays[i];
                                        ageArrays[i] = ageArrays[j];
                                        ageArrays[j] = tempAge;
                                        // swap matric
                                        float tempMatric = matricArrays[i];
                                        matricArrays[i] = matricArrays[j];
                                        matricArrays[j] = tempMatric;
                                        // swap inter
                                        float tempInter = interArrays[i];
                                        interArrays[i] = interArrays[j];
                                        interArrays[j] = tempInter;
                                        // swap ecat
                                        float tempEcat = ecatArrays[i];
                                        ecatArrays[i] = ecatArrays[j];
                                        ecatArrays[j] = tempEcat;
                                        // swap pref1
                                        string tempPref1 = pref1Arrays[i];
                                        pref1Arrays[i] = pref1Arrays[j];
                                        pref1Arrays[j] = tempPref1;
                                        // swap pref2
                                        string tempPref2 = pref2Arrays[i];
                                        pref2Arrays[i] = pref2Arrays[j];
                                        pref2Arrays[j] = tempPref2;
                                        // swap pref3
                                        string tempPref3 = pref3Arrays[i];
                                        pref3Arrays[i] = pref3Arrays[j];
                                        pref3Arrays[j] = tempPref3;
                                        // swap aggrigate
                                        float tempAggri = aggriArrays[i];
                                        aggriArrays[i] = aggriArrays[j];
                                        aggriArrays[j] = tempAggri;
                                    }
                                }
                            }
                            // code to display all data with aggregate
                            cout << " Name\tAge\tAggregate " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArrays[i] != "")
                                {
                                    cout << nameArrays[i] << "\t" << ageArrays[i] << "\t" << aggriArrays[i] << endl;
                                }
                            }

                            // After generating merit list we have to allocate departments on the basis of prefrences and merit
                            cout << " DEPARTMENT ALLOCATIONS " << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (pref1Arrays[i] == "CS" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "CS";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref1Arrays[i] == "SE" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "SE";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref1Arrays[i] == "EE" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "EE";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref2Arrays[i] == "CS" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "CS";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref2Arrays[i] == "SE" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "SE";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref2Arrays[i] == "EE" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "EE";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref3Arrays[i] == "CS" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "CS";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref3Arrays[i] == "SE" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "SE";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                                else if (pref3Arrays[i] == "EE" && departmentArrays[i] == "")
                                {
                                    departmentArrays[i] = "EE";
                                    cout << " Department allocated for " << nameArrays[i] << " is " << departmentArrays[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // Delete student record
                            cout << " Enter name you want to delete : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArrays[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArrays[foundindex] = "";
                                ageArrays[foundindex] = 0;
                                matricArrays[foundindex] = 0;
                                interArrays[foundindex] = 0;
                                ecatArrays[foundindex] = 0;
                                pref1Arrays[foundindex] = "";
                                pref2Arrays[foundindex] = "";
                                pref3Arrays[foundindex] = "";
                                cout << " Record of " << name << " deleted " << endl;
                            }
                            else
                            {
                                cout << " Record not found " << endl;
                            }
                        }
                        else if (adminOption == 6)
                        {
                            // logout
                            break;
                        }
                        else
                        {
                            cout << " You chose wrong option " << endl;
                        }
                        cout << " Press any key to continue...";
                        getch();
                    }
                    cout << " Press any key to continue...";
                    getch();
                    break;
                }
                else
                {
                    cout << " Username or Password is invalid " << endl;
                    cout << " Press any key to continue...";
                    getch();
                }
            }
        }
        else if (userOption == 2)
        {
            // write here the student code
            system("cls");
            cout << " Welcome to UMS student menu " << endl;
            cout << " Enter your name : ";
            string name;
            cin >> name;
            cout << " Enter your age : ";
            int age;
            cin >> age;
            cout << " Enter your matric marks ";
            float matric;
            cin >> matric;
            cout << " Enter your Fsc marks : ";
            float inter;
            cin >> inter;
            cout << " Enter your ECAT marks : ";
            float ecat;
            cin >> ecat;
            cout << " Enter CS, SE, or EE as your prefrence " << endl;
            cout << " Enter your 1st prefrence : ";
            string pref1;
            cin >> pref1;
            cout << " Enter your 2nd prefrence : ";
            string pref2;
            cin >> pref2;
            cout << " Enter your 3rd prefrence : ";
            string pref3;
            cin >> pref3;

            nameArrays[index] = name;
            ageArrays[index] = age;
            matricArrays[index] = matric;
            interArrays[index] = inter;
            ecatArrays[index] = ecat;
            pref1Arrays[index] = pref1;
            pref2Arrays[index] = pref2;
            pref3Arrays[index] = pref3;
            index++;
            cout << " Your data has been saved " << endl;
            cout << " Press any key to continue...";

            getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            cout << " You entered the wrong option " << endl;
        }
    }
    cout << endl
         << " Thanks For Using This Software ";
}
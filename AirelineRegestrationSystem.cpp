/*
                                            Airline Regestration system 
                                            --------------------------
In this C++ program i have created a airline ticket regestration system In which you can do some basic functionality
1. Enter and save details of user
2. Display country and their availabe tickets to user and make them select country and one of the options from ticket
3. save users flight ticket details in file
4. display the ticket to user
*/


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

class Details
{
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\nEnter the costomer ID :" << endl;
        cin >> cId;
        cout << "\nEnter the Name :";
        cin >> name;
        cout << "\nEnter Age :";
        cin >> age;
        cout << "\n Address :";
        cin >> add;
        cout << "\n Gender :";
        cin >> gender;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    float charges;

    void flights()
    {
        string flightN[] = {"Dubai", "Canada", "India", "Uk", "USA", "Australia"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".flight to" << flightN[a] << endl;
        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press their number of the country of which you want to book the flight";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "_____________Welcome to Dubai Emirates______________'\n";
            cout << "Your comfort is our priority. Enjoy the journey" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. DUB - 208" << endl;
            cout << "\t08-01-2025  8:00AM  10hrs  Rs 200" << endl;
            cout << "2. DUB - 408" << endl;
            cout << "\t16-01-2025  6:00PM  8hrs  Rs 650" << endl;
            cout << "3. DUB - 608" << endl;
            cout << "\t25-01-2030  8:00AM  10hrs  Rs 200" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight DUB - 208";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 2)
            {
                charges = 650;
                cout << "\nYou have successfully booked the flight DUB - 408";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight DUB - 608";
                cout << "You can go back to menu and collect ticket!";
            }
            else
            {
                cout << "Invalid input shifting to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 2:
        {
            cout << "_____________Welcome to Canada Emirates______________'\n";
            cout << "Your comfort is our priority. Enjoy the journey" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. CAN - 208" << endl;
            cout << "\t08-01-2025  8:00AM  10hrs  Rs 200" << endl;
            cout << "2. CAN - 408" << endl;
            cout << "\t16-01-2025  6:00PM  8hrs  Rs 650" << endl;
            cout << "3. CAN - 608" << endl;
            cout << "\t25-01-2030  8:00AM  10hrs  Rs 200" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight CAN - 208";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 2)
            {
                charges = 650;
                cout << "\nYou have successfully booked the flight CAN - 408";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight CAN - 608";
                cout << "You can go back to menu and collect ticket!";
            }
            else
            {
                cout << "Invalid input shifting to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 3:
        {
            cout << "_____________Welcome to Air India______________'\n";
            cout << "Your comfort is our priority. Enjoy the journey" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. IND - 208" << endl;
            cout << "\t08-01-2025  8:00AM  10hrs  Rs 200" << endl;
            cout << "2. IND - 408" << endl;
            cout << "\t16-01-2025  6:00PM  8hrs  Rs 650" << endl;
            cout << "3. IND - 608" << endl;
            cout << "\t25-01-2030  8:00AM  10hrs  Rs 200" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight IND - 208";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 2)
            {
                charges = 650;
                cout << "\nYou have successfully booked the flight IND - 408";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight IND - 608";
                cout << "You can go back to menu and collect ticket!";
            }
            else
            {
                cout << "Invalid input shifting to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 4:
        {
            cout << "_____________Welcome to UK Emirates______________'\n";
            cout << "Your comfort is our priority. Enjoy the journey" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. UK - 208" << endl;
            cout << "\t08-01-2025  8:00AM  10hrs  Rs 200" << endl;
            cout << "2. UK - 408" << endl;
            cout << "\t16-01-2025  6:00PM  8hrs  Rs 650" << endl;
            cout << "3. UK - 608" << endl;
            cout << "\t25-01-2030  8:00AM  10hrs  Rs 200" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight UK - 208";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 2)
            {
                charges = 650;
                cout << "\nYou have successfully booked the flight UK - 408";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight UK- 608";
                cout << "You can go back to menu and collect ticket!";
            }
            else
            {
                cout << "Invalid input shifting to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }

        case 5:
        {
            cout << "_____________Welcome to USA Emirates______________'\n";
            cout << "Your comfort is our priority. Enjoy the journey" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. USA - 208" << endl;
            cout << "\t08-01-2025  8:00AM  10hrs  Rs 200" << endl;
            cout << "2. USA - 408" << endl;
            cout << "\t16-01-2025  6:00PM  8hrs  Rs 650" << endl;
            cout << "3. USA - 608" << endl;
            cout << "\t25-01-2030  8:00AM  10hrs  Rs 200" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight USA - 208";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 2)
            {
                charges = 650;
                cout << "\nYou have successfully booked the flight USA - 408";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight USA - 608";
                cout << "You can go back to menu and collect ticket!";
            }
            else
            {
                cout << "Invalid input shifting to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 6:
        {
            cout << "_____________Welcome to Australia Emirates______________'\n";
            cout << "Your comfort is our priority. Enjoy the journey" << endl;

            cout << "Following are the flights \n"
                 << endl;

            cout << "1. AUS - 208" << endl;
            cout << "\t08-01-2025  8:00AM  10hrs  Rs 200" << endl;
            cout << "2. AUS - 408" << endl;
            cout << "\t16-01-2025  6:00PM  8hrs  Rs 650" << endl;
            cout << "3. AUS - 608" << endl;
            cout << "\t25-01-2030  8:00AM  10hrs  Rs 200" << endl;

            cout << "\nSelect the flight you want to book :";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight AUS - 208";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 2)
            {
                charges = 650;
                cout << "\nYou have successfully booked the flight AUS - 408";
                cout << "You can go back to menu and collect ticket!";
            }
            else if (choice1 == 3)
            {
                charges = 200;
                cout << "\nYou have successfully booked the flight AUS - 608";
                cout << "You can go back to menu and collect ticket!";
            }
            else
            {
                cout << "Invalid input shifting to the previous menu" << endl;
                flights();
            }

            cout << "press any key to go back to main menu:" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        default:
        {
            cout << "Invalid Input shifting to the main menu" << endl;
            mainMenu();
            break;
        }
        }
    }
};

int registration::choice;

class ticket : public registration, Details
{
public:
    void Bill()
    {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "_________Mourya Airlines________" << endl;
            outf << "____________Tickets_____________" << endl;
            outf << "________________________________" << endl;

            outf << "Customer ID:" << Details::cId << endl;
            outf << "Customer Name:" << Details::name << endl;
            outf << "Customer Gender:" << Details::gender << endl;
            outf << "\tDescription" << endl
                 << endl;

            if (registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (registration::choice == 3)
            {
                destination = "India";
            }
            else if (registration::choice == 4)
            {
                destination = "UK";
            }
            else if (registration::choice == 5)
            {
                destination = "USA";
            }
            else if (registration::choice == 6)
            {
                destination = "Australia";
            }

            outf << "Destination\t\t" << destination << endl;
            // outf<<"Flight cost :\t\t"<<registration::charges<<endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if (!ifs)
            {
                cout << "File error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t       Mourya Airlines  \n";
    cout << "\t_________Main Menu______" << endl;

    cout << "\t___________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Cutomer Details  \t|" << endl;
    cout << "\t|\t Press 2 for Flight Registration  \t|" << endl;
    cout << "\t|\t Press 3 for ticket and charges  \t|" << endl;
    cout << "\t|\t Press 4 for to exit  \t|" << endl;
    cout << "\t\t\t\t\t\t\t|" << endl;
    cout << "\t___________________________________________" << endl;

    cout << "Enter the choice :";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {

    case 1:
    {
        cout << "____________Coustomers___________\n"
             << endl;
        d.information();
        cout << "Press 1 to go back to Main menu";
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 2:
    {
        cout << "_________Book a flight Using this system _______\n"
             << endl;
        r.flights();
        break;
    }

    case 3:
    {
        cout << "____GET Your TICKET____\n"
             << endl;
        t.Bill();

        cout << "Your Ticket is printed you can collect it \n"
             << endl;
        cout << "Press 1 to display your ticket";

        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            cout << "Press any key to go back to main menu:";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }

        break;
    }

    case 4:
    {
        cout << "\n\n\t________Thank-you_________" << endl;
        break;
    }

    default:
    {
        cout << "Invaild Input, Pease try again\n"
             << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management Mobj;
    return 0;
}

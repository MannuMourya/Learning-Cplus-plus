/*
         A program showing ATM functionalities using OOP's
         1. Check Balance
         2. Cash WithDraw
         3. User Details
         4. Update Mobile No
 */
#include<iostream> // This is C++ header and it is used to take user input and showing output
#include<string>   // using this header file so we can easily use string in our program.
using namespace std;

class atm                   // Class atm
{
private:             //access specifier (private member veriable)
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:                              // public member functions
    // Set data function is setting the data to private member variable
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
    {
        account_No = account_No_a;
        name = name_a;
        PIN = PIN_a;                // assigning the formal argument to private members.
        balance = balance_a;
        mobile_No = mobile_No_a;
    }
    // getAccount function is returning the user's account no.
    long int getAccountNo()
    {
        return account_No;
    }

    //getName function is returning the user's Name
    string getName()
    {
        return name;
    }
    
    //getPIN function is returning the user's PIN
    int getPIN()
    {
        return PIN;
    }

    //getBalance is returning the user's Bank Balance.
    double getBalance()
    {
        return balance;
    }

    //getMobile is returning the user's Mobile No.
    string getMobileNo()
    {
        return mobile_No;
    }

    //setMobile function is updating the user mobile no
    void setMobile(string mob_prev, string mob_new)
    {
        if (mob_prev == mobile_No)        //it will check old mobile no.
        {
            mobile_No = mob_new; // and updated with new, if old matches.
            cout << endl << "Sucessfully Updated Mobile no.";
            cin.get(); // this is to hold the screen (untill user press any key)
        }

        else
        {
            cout << endl << "Incorrect !!!! Old Mobile no";
            cin.get();
        }
    }

    //cashwithDraw Function is used to withdraw money from  ATM
    void cashWithDraw(int amount_a)
    {
        if (amount_a > 0 && amount_a < balance) //check entered amount valiity
        {
            balance -= amount_a;
            cout << endl << "Please Collect Your Cash";
            cout << endl << "Available Balance :" << balance ;
            cin.get();
        }
        else
        {
            cout << endl << "Invalid Input or Insufficient Balance";
            cin.get();
        }

    }
};
/*-------------------------------------------------------------------------------------*/

int main()
{
    int choice = 0, enterPIN; //EnterPIN and EnterAccount No ----> User authentication
    long int enterAccountNo;

    system("cls");

    //created User (Object)

    atm aditya;
    //Set User Details (into Object)  (Setting Default Data)
    aditya.setData(697998, "AdityaSinha", 8383, 9000000.0, "227903601");

    do
    {
        system("cls");

        cout << endl << "******Welcome to ATM*******" << endl;
        cout << endl << "Enter Your Account No "; //asking User to enter account no
        cin >> enterAccountNo;

        cout << endl << "Enter PIN";   // asking user to enter PIN
        cin >> enterPIN;

        // check wheter enter value matches with user details
        if ((enterAccountNo == aditya.getAccountNo()) && enterPIN == aditya.getPIN())
        {
            do
            {
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");
                //user Interface
                cout << endl << "******** Welcome to ATM *******" << endl;
                cout << endl << "Seclect Oprtion";
                cout << endl << "1. Check Balance";
                cout << endl << "2. Cash Withdraw";
                cout << endl << "3. Show User Details";
                cout << endl << "4. Update Mobile no.";
                cout << endl << "5. Exit" << endl;
                cin >> choice;      // taking user choice

                switch (choice)            // Switch Condition
                {
                    case 1:
                    cout << endl << "Your Bank balance is :" << aditya.getBalance();
                    // get balance is printing the users bank balance
                    cin.get();
                    break;

                    case 2:      // if user press 2
                    cout << endl << "Enter the amount :";
                    cin >> amount;
                    aditya.cashWithDraw(amount);
                    // calling cashwithdraw function and passing the withdraw amount
                    break;

                    case 3:  // if the user presses 3.
                     cout << endl << "**** User details are :- ";
                     cout << endl << " -> Account no " << aditya.getAccountNo();
                     cout << endl << " -> Name       " << aditya.getName();
                     cout << endl << " -> Balance    " << aditya.getBalance();
                     cout << endl << " -> Mobile No. " << aditya.getMobileNo();
                    //getting and printing user details

                    cin.get();

                    break;

                    case 4:          // if user presses 4
                    cout << endl << "Enter old Mobile No.";
                    cin >> oldMobileNo;     // take old mobile no

                    cout << endl << "Enter New Mobile No. ";
                    cin >> newMobileNo;

                    aditya.setMobile(oldMobileNo, newMobileNo);
                    break;

                    case 5:         // if user presses 5
                        exit(0);

                    default:
                     cout << endl << " Enter valid Data !!!!";

                }
                

            }while (1);
        }

    } while (1);


}
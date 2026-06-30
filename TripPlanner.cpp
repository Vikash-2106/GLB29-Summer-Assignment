#include <iostream>
#include <string>
using namespace std;

class TripPlanner
{
private:
    string name;
    string destination;
    string budget;
    float income;
    int score;

public:
    void getData()
    {
        cin.ignore();

        cout << endl << "Enter Your Name: ";
        getline(cin, name);

        cout << "Enter Your Annual Income (in Lakhs): ";
        cin >> income;

        score = 0;
        char ans;

        cout << endl << "Answer the following questions (Y/N):" << endl;

        cout << "1. Do you enjoy adventure sports? ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
            score += 2;

        cout << "2. Do you like beaches? ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
            score += 2;

        cout << "3. Do you enjoy peaceful nature? ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
            score += 2;

        cout << "4. Do you like historical places? ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
            score += 2;

        cout << "5. Do you enjoy snowy mountains? ";
        cin >> ans;
        if (ans == 'Y' || ans == 'y')
            score += 2;

        allocateTrip();
    }

    void allocateTrip()
    {
        // Destination according to personality

        if (score <= 2)
        {
            destination = "Maldives / Goa";
        }
        else if (score <= 4)
        {
            destination = "Rome (Italy) / Jaipur (India)";
        }
        else if (score <= 6)
        {
            destination = "Bali (Indonesia) / Kerala (India)";
        }
        else if (score <= 8)
        {
            destination = "Queenstown (New Zealand) / Rishikesh (India)";
        }
        else
        {
            destination = "Swiss Alps (Switzerland) / Manali (India)";
        }

        // Budget according to annual income

        if (income < 5)
        {
            budget = "Cheap";
        }
        else if (income <= 15)
        {
            budget = "Medium";
        }
        else
        {
            budget = "Luxury";
        }
    }

    void display()
    {
        cout << endl;
        cout << "==========================================" << endl;
        cout << "Name                  : " << name << endl;
        cout << "Annual Income         : " << income << " Lakhs" << endl;
        cout << "Personality Score     : " << score << endl;
        cout << "Recommended Trip      : " << destination << endl;
        cout << "Budget Type           : " << budget << endl;

        if (destination == "Maldives / Goa")
        {
            if (budget == "Cheap")
                cout << "Estimated Budget      : Rs. 35,000 - 60,000" << endl;
            else if (budget == "Medium")
                cout << "Estimated Budget      : Rs. 70,000 - 1,20,000" << endl;
            else
                cout << "Estimated Budget      : Rs. 2,00,000+" << endl;
        }
        else if (destination == "Rome (Italy) / Jaipur (India)")
        {
            if (budget == "Cheap")
                cout << "Estimated Budget      : Rs. 50,000 - 80,000" << endl;
            else if (budget == "Medium")
                cout << "Estimated Budget      : Rs. 1,20,000 - 2,50,000" << endl;
            else
                cout << "Estimated Budget      : Rs. 4,00,000+" << endl;
        }
        else if (destination == "Bali (Indonesia) / Kerala (India)")
        {
            if (budget == "Cheap")
                cout << "Estimated Budget      : Rs. 45,000 - 70,000" << endl;
            else if (budget == "Medium")
                cout << "Estimated Budget      : Rs. 1,00,000 - 2,00,000" << endl;
            else
                cout << "Estimated Budget      : Rs. 3,50,000+" << endl;
        }
        else if (destination == "Queenstown (New Zealand) / Rishikesh (India)")
        {
            if (budget == "Cheap")
                cout << "Estimated Budget      : Rs. 60,000 - 90,000" << endl;
            else if (budget == "Medium")
                cout << "Estimated Budget      : Rs. 1,80,000 - 3,00,000" << endl;
            else
                cout << "Estimated Budget      : Rs. 5,00,000+" << endl;
        }
        else
        {
            if (budget == "Cheap")
                cout << "Estimated Budget      : Rs. 70,000 - 1,00,000" << endl;
            else if (budget == "Medium")
                cout << "Estimated Budget      : Rs. 2,00,000 - 3,50,000" << endl;
            else
                cout << "Estimated Budget      : Rs. 6,00,000+" << endl;
        }

        cout << "==========================================" << endl;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    TripPlanner user[100];

    int n = 0;
    int choice;

    do
    {
        cout << endl;
        cout << "========== AI Personality Based Trip Planner ==========" << endl;
        cout << "1. Take Personality Test" << endl;
        cout << "2. Display All Recommendations" << endl;
        cout << "3. Search User" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            if (n < 100)
            {
                user[n].getData();
                cout << endl << "Trip Recommendation Generated Successfully!" << endl;
                n++;
            }
            else
            {
                cout << endl << "Maximum Records Reached!" << endl;
            }

            break;

        case 2:

            if (n == 0)
            {
                cout << endl << "No Records Found!" << endl;
            }
            else
            {
                cout << endl << "===== Recommended Trips =====" << endl;

                for (int i = 0; i < n; i++)
                {
                    user[i].display();
                }
            }

            break;

        case 3:
        {
            if (n == 0)
            {
                cout << endl << "No Records Found!" << endl;
                break;
            }

            string searchName;
            bool found = false;

            cin.ignore();

            cout << endl << "Enter Name to Search: ";
            getline(cin, searchName);

            for (int i = 0; i < n; i++)
            {
                if (user[i].getName() == searchName)
                {
                    user[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << endl << "User Not Found!" << endl;
            }

            break;
        }

        case 4:

            cout << endl << "Thank You for Using AI Personality Based Trip Planner!" << endl;

            break;

        default:

            cout << endl << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
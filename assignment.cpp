#include <iostream>
using namespace std;
//* QUESTION
//* The local cinema has introduced a new pricing policy to attract different age groups by offering  special  discounts  on  
// tickets  based  on  the  day  of  the  week.  Regular  Prices: Children's tickets are priced at $120, adultticketsat $250,
//andseniorcitizenticketsat $200.  Sunday:  Nodiscounts; standard pricing applies for all. Mondays: Discounts are offered to 
// kickstart the week: $10 off for children, $15 off for adults, and $15 off for senior citizens. 
// Tuesdays: The cinema goes all out with even more significant discounts: $20 off across all ticket categories. 
//(Use the concept of if...else and switch case) *//
int main()

{
    int age;
    int day;

    cout << "Enter your age: ";
    cin >> age;
    if(age<=10)
    {
        cout<<"Ticket for Child . "<<endl;
    }
    else if(age>10 && age<50)
    {
        cout<<"Ticket for Adult ."<<endl;
    }
    else if (age=>50)
    {
        cout<<"Ticket for Senior Citizen ."<<endl;
    }
    else
    {
        cout<<"Invalid age . Input Correct Age ."<<endl;
    }

    cout << "Enter the day of the week (1 for Sunday, 2 for Monday, 3 for Tuesday, 4 for Wednesday, 5 for Thursday, 6 for Friday, 7 for Saturday): ";
    cin >> day;

    int childPrice = 120;
    int adultPrice = 250;
    int seniorPrice = 200;

    switch(day) {
        case 1:
            cout << "No Discount" << endl;
            childPrice = 120;
            seniorPrice = 250;
            adultPrice = 200;
            break;
        case 2:
            childPrice -= 10;
            seniorPrice -= 15;
            adultPrice -= 15;
            break;
        case 3:
            childPrice -= 20;
            adultPrice -= 20;
            seniorPrice -= 20;
            break;
        case 4:
            cout << "No Discount" << endl;
            childPrice = 120;
            seniorPrice = 250;
            adultPrice = 200;
            break;
        case 6:
            cout << "No Discount" << endl;
            childPrice = 120;
            seniorPrice = 250;
            adultPrice = 200;
            break;
        case 7:
            cout << "No Discount" << endl;
            childPrice = 120;
            seniorPrice = 250;
            adultPrice = 200;
            break;
        default:
            cout << "Invalid day!";
    }

    if (day != 1 || day!=4 || day!=5 || day!=6 || day!=7)
    {
        if (age < 10)
            cout << "Your ticket price is: " << childPrice << " $" << endl;
        else if (age>10 || age<50)
            cout << "Your ticket price is: " << adultPrice << " $" << endl;
        else if (age>=50)
            cout << "Your ticket price is: " << seniorPrice << " $" << endl;

        else cout<< "Invalid";
    }
    return 0;
}

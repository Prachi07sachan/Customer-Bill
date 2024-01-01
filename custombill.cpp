// Here we are creating a customer bill generation project in C++ language
#include <iostream>
using namespace std;
int main()
{
    // variables for items quantity (q for quantity)
    int qB = 0, qP = 0, qCD = 0, qFC = 0, qFF = 0;
    // variables for items price (p for prize) item prize is fix
    int pB = 90, pP = 180, pCD = 80, pFC = 300, pFF = 130;
    cout << "\n\n\n\n\t\t\t\tWelcome to Crezy Food Corner!"; 
    cout << "\n\t\t\t\t---------------Menu----------------";
    cout << "\n\t\t\t\tBurger-----------------------RS 90";
    cout << "\n\t\t\t\tPizza------------------------RS 180";
    cout << "\n\t\t\t\tCold Drink-------------------RS 80";
    cout << "\n\t\t\t\tFried Chicken----------------RS 300";
    cout << "\n\t\t\t\tFrench Fries-----------------RS 130";
    cout << "\n\t\t\t\t-----------------------------------";
    cout << "\n\t\t\t\tEnter the Quantity of Each Item to Buy!";
    cout << "\n\t\t\t\tNumber of Burgers:"; 
    cin >> qB;
    cout << "\n\t\t\t\tNumber of Pizza:";
    cin >> qP;
    cout << "\n\t\t\t\tNumber of Cold Drinks(1.57 L):";
    cin >> qCD;
    cout << "\n\t\t\t\tNumber of Fried Chicken (8 pieces):";
    cin >> qFC;
    cout << "\n\t\t\t\tNumber of French Fries:";
    cin >> qFF;

    int tpB = qB * pB;
    int tpP = qP * pP;
    int tpCD = qCD * pCD;
    int tpFC = qFC * pFC;
    int tpFF = qFF * pFF;



    cout << "\n\n\n\n\t\tOutput Of the Program: ";
    cout << "\n\n\t\t***************************************************************************************************";
    cout << "\n\t\t\t\t\t\tCustomer's Bill";
    cout << "\n\t\t***************************************************************************************************";
    cout << "\n\t\t\tQuantity\t\tDescription\t\tUnit price\t\tFinal Price";
    cout << "\n\n\t\t\t  " << qB << "\t\t\tBurger\t\t\t 90\t\t\t"
         << "\t " << tpB;
    cout << "\n\t\t\t  " << qP << "\t\t\tPizza\t\t\t 180\t\t\t"
         << "\t " << tpP;
    cout << "\n\t\t\t  " << qCD << "\t\t\tCold Drink\t\t 80\t\t\t"
         << "\t " << tpCD;
    cout << "\n\t\t\t  " << qFC << "\t\t\tFried Chicken\t\t 300\t\t\t"
         << "\t " << tpFC;
    cout << "\n\t\t\t  " << qFF << "\t\t\tFrench Fries \t\t 130\t\t\t"
         << "\t " << tpFF;

    int totalPrice = tpB + tpP + tpCD + tpFC + tpFF;
    float discount = 10.0 * totalPrice / 100;
    float netBill = totalPrice - discount;

    cout << "\n\n\n\t\t\t\t\t\t\t\t\t\tTotal Bill: " << totalPrice;
    cout << "\n\t\t\t\t\t\t\t\t\t\tDiscount (10%): " << discount;
    cout << "\n\t\t\t\t\t\t\t\t\t\tFinal Bill: " << netBill;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    const double LIMIT_1 = 50000 ,LIMIT_2 = 75000,LIMIT_3 = 100000,LIMIT_4 = 250000,LIMIT_5 = 500000;

    const double RATE_1 = 0.01,RATE_2 = 0.02,RATE_3 = 0.03,RATE_4 = 0.04,RATE_5 = 0.05,RATE_6 = 0.06;

    double income, income_tax;
    int i;

    do
    {
        cout << "Please enter your income: ";
        cin >> income;
        
        if (income <= LIMIT_1) {
            income_tax = income * RATE_1;
        }
        else if (income > LIMIT_1 && income <= LIMIT_2) {
            income_tax = (LIMIT_1 * RATE_1) + ((income - LIMIT_1) * RATE_2);
        }
        else if (income > LIMIT_2 && income <= LIMIT_3) {
            income_tax = (LIMIT_1 * RATE_1) + ((LIMIT_2 - LIMIT_1) * RATE_2) + ((income - LIMIT_2) * RATE_3);
        }
        else if (income > LIMIT_3 && income <= LIMIT_4) {
            income_tax = (LIMIT_1 * RATE_1) + ((LIMIT_2 - LIMIT_1) * RATE_2) + ((LIMIT_3 - LIMIT_2) * RATE_3) + ((income - LIMIT_3) * RATE_4);
        }
        else if (income > LIMIT_4 && income <= LIMIT_5) {
            income_tax = (LIMIT_1 * RATE_1) + ((LIMIT_2 - LIMIT_1) * RATE_2) + ((LIMIT_3 - LIMIT_2) * RATE_3) + ((LIMIT_4 - LIMIT_3) * RATE_4) + ((income - LIMIT_4) * RATE_5);
        }
        else {
            income_tax = (LIMIT_1 * RATE_1) + ((LIMIT_2 - LIMIT_1) * RATE_2) + ((LIMIT_3 - LIMIT_2) * RATE_3) + ((LIMIT_4 - LIMIT_3) * RATE_4) + ((LIMIT_5 - LIMIT_4) * RATE_5) + ((income - LIMIT_5) * RATE_6);
        }

        cout << "Your income tax is: $" << income_tax << endl;

        cout << "If you want to run again press '1', to exit press '0': ";
        cin >> i;

    } while (i == 1);

    cout << "Program closed" << endl;
    return 0;
}

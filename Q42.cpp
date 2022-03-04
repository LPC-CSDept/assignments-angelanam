#include <iostream>
#include <iomanip> //input output manipulator
using namespace std;

int main()
{
    const int minweight = 0 , maxweight = 20, mindistance = 10, maxdistance = 3000;

    float package, distance, totalCharge; //package = package weight

    cout << "What is the weight of the package?" << endl;
    cin >> package;

    if (package <= minweight or package > maxweight) //will ask for distance if package is between 1-20kg
    {
        cout << "Package must weigh less than 20kg and more than 0kg,\n"
        << "Please try again." << endl;
    }
    else
    {
        cout << "What is the distance?" << endl;
        cin >> distance;

        if (distance < mindistance or distance > maxdistance) //will calculate total amount if distance is between 10-3000mi
        {
            cout << "Distance must be between 10 and 3,000 miles,\n"
            << "Please try again." << endl;
        }
        else
        {
            if (package <= 2)
            totalCharge = (distance / 500.00) * 1.10; //rate = $1.10 if package is/less than 2kg
            else if (package > 2 & package <= 6)
            totalCharge = (distance / 500.00) * 2.20; //rate = $2.20 if package is more than 2 & is/less than 6kg
            else if (package > 6 & package <= 10)
            totalCharge = (distance / 500.00) * 3.70; //rate = $3.70 if package is more than 6 & is/less than 10kg
            else if (package > 10 & package <= 20)
            totalCharge = (distance / 500.00) * 4.80; //rate = $4.80 if package is more than 10 & is/less than 20kg
            
            cout << setprecision(2) << fixed; //using setprecision to show proper cash amount
            cout << "The total charge is $" << totalCharge << " for the distance of "
            << distance << " miles and total weight of " << package << " kg." << endl;
            //prints total amount along w/ distance & weight
        }
    }

return 0;
}
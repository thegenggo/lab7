/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age,height,property;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=20)
    {
        cout << "Enter your height: ";
        cin >> height;
        if(height < 160)
        {
            status = "UNFRIEND";
        }
        else if(height < 175)
        {
            status = "FRIEND";
        }
        else
        {
            cout << "Enter your property: ";
            cin >> property;
            status = (property>69000000?"MARRIED":"ONE-NIGHT-STAND");
        }
    }
    else if(age < 30)
    {
        cout << "Enter your property: ";
        cin >> property;
        status = (property>10000000?"BEST FRIEND":"UNFRIEND");
    }
    else
    {
        status = "UNFRIEND";
    }
    cout << "Your status = " << status;
    
    return 0;
}
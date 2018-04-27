#include <bits/stdc++.h>
using namespace std;

void current_medication()
{

}

void new_medication()
{
    cout<<"Enter new patient's name : ";
    cin>>patientName;
    cout<<"Enter new patient's age : ";
    cin>>patientAge;
    do
    {
        cout<<"Give medicine?? (y/n) : ";
        cin>>yesOrNo;
        cout<<"Enter medicines : ";
        cin>>medicineName;//here will be shown a list of all medicines based on this name as prefix
        cout<<"Enter dose/day : ";
        cin>>dosePerDay;
    }
    while(yesOrNo!="n");
    cout<<"Enter doctor name : ";//doctor who have prescribed
    cin>>doctorName;
    //now store that document in the database or file
}

void formulary()
{

}

int main()
{
    ///UI will be here
}

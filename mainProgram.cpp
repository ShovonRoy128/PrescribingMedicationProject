#include <bits/stdc++.h>
using namespace std;
std::fstream fs;
void current_medication()
{
    cout<<"Check the previous doses here: "<<endl<<endl;

  string ss;
  fs.open ("doses.txt", std::fstream::in | std::fstream::out);


  if (fs.is_open()){
    while(getline(fs,ss)){
      cout<<ss<<endl;
    }
    fs.close();
  }
  int n;
  cout<<"If you want to add new doses plz enter how many doses else press 0 : ";
  cin>>n;

  if(n==0)return;
  int cnt = 0;


  fs.open ("doses.txt", std::fstream::in | std::fstream::out | std::fstream::app);


    cin.ignore();
  while(cnt<n){
    cout<<"Enter new dose "<<++cnt<<" :"<<endl;
    getline(cin, ss);
    fs<<ss;
    fs<<"\n";
  }
  cout<<"Your new doses have been added! Thank you. :)\n";
    fs.close();
}

void new_medication()
{
    string patientName,patientAge,yesOrNo,medicineName,dosePerDay,doctorName;
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
/*
    List of Abbreviations
ACA: Affordable Care Act.

LA: Limited Availability. This prescription may be available only at certain pharmacies. For more information,
please call Customer Service.

PA: Prior Authorization. The Plan requires you or your physician to get prior authorization for certain drugs. This
means that you will need to get approval before you fill your prescriptions. If you don’t get approval, we may not
cover the drug.

QL: Quantity Limit. For certain drugs, the Plan limits the amount of the drug that we will cover.

ST: Step Therapy. In some cases, the Plan requires you to first try certain drugs to treat your medical condition
before we will cover another drug for that condition. For example, if Drug A and Drug B both treat your medical
condition, we may not cover Drug B unless you try Drug A first. If Drug A does not work for you, we will then
cover Drug B.
-------------------------------------------------------------
-------------------------------------------------------------
Drug Tier: identifies the member’s cost sharing requirement
Tier 1A,B Preferred generic drug.
Tier 2 Generic drug.
Tier 3 Preferred brand drug.
Tier 4 Brand drug.
Tier 5 Oral chemotherapy drug.
Tier 6 Specialty drug.
Tier 7 Preventive drug available at no cost to the member.
*/
    string drugName,drugTier,requirementOrLimit;
    cout<<"Enter drug name : ";
    cin>>drugName;
    cout<<"Enter drug tier : ";
    cin>>drugTier;
    cout<<"Enter requirement or limit : ";
    cin>>requirementOrLimit;
    //put down in the database
}

void userInterface()
{
    cout<<"                *****______________________________________*****\n";
    cout<<"                *****--------------------------------------*****\n";
    cout<<"                **         WELCOME TO MY OUR PROJECT          **\n";
    cout<<"                **       PRESCRIBING MEDICATION SYSTEM        **\n";
    cout<<"                *****______________________________________*****\n";
    cout<<"                *****--------------------------------------*****\n\n";
    int p;
    do
    {
        cout<<"\n\n                 ----------------------------------\n"
            <<"                 ----Please Enter Your Choice------\n"
            <<"\n                 1.Current Medication\n"
            <<"                 2.New Medication\n"
            <<"                 3.Formulary\n"
            <<"                 4.exit\n"
            <<"                 ----------------------------------\n"
            <<"                 ----------------------------------\n";
        cout<<"     PRESS ==>> ";
        cin>>p;
        cout<<endl;

    }
    while(p!=4);
}

int main()
{
    ///UI will be here
    //current_medication();
    userInterface();
}

#include <bits/stdc++.h>
using namespace std;
class patient
{
    private:
    int age,Serialno;
    string typeofdisease,name;
    string cmedication,nmedication,formulary;
    public:
      void illpatient()
    {
        cout<<"Enter serial no: ";
        cin>>Serialno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

void current_medication()
{
 cout<<"Enter type of disease: ";
        cin>>typeofdisease;
        cout<<"Enter current medication: ";
        cin>>cmedication;
}

void new_medication()
{
cout<<"Enter type of disease: ";
        cin>>typeofdisease;
        cout<<"Enter New medication: ";
        cin>>nmedication;
}

void formulary()
{
cout<<"Enter formulary: ";
        cin>>formulary;
}
};

int main()
{
    ///UI will be here
}

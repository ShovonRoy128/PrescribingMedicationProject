#include <bits/stdc++.h>
using namespace std;

void current_medication()
{
    cout<<"Check the previous doses here: "<<endl<<endl;

  string ss;
  fstream myfile ("doses.txt");
  if (myfile.is_open()){
    while(getline(myfile,ss)){
      cout<<ss<<endl;
    }
    myfile.close();
  }

}

void new_medication()
{

}

void formulary()
{

}

int main()
{
    ///UI will be here
    current_medication();
}

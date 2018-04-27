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

}

void formulary()
{

}

int main()
{
    ///UI will be here
    current_medication();
}

//Exercise 2: File Writer


#include <iostream>
#include <fstream>
using namespace std;

string input;
string decison;


int main () {
  cout << "Hello, Welcome to File Writer\n";

  cout<<"Enter name: ";
  // cin>>input;
  getline(cin, input);

  ofstream myfile;
  myfile.open ("list.csv");
  cout<<"Updating file... \n";
  myfile << input <<"\n";
  myfile.close();

  cout<< "Add another (y/n)?";
  // cin>>decison;
  getline(cin, decison);
  if(decison=="Y"||decison=="y"){
    myfile.close();
    main();
  }else if(decison=="N"||decison=="n"){
    cout<<"Goodbye";
  }else{ 

  }

  
  return 0;
}

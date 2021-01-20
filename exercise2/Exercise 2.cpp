// //Exercise 2: File Writer


#include <iostream>
#include <fstream>
using namespace std;

string input;//declaring variable used for input 
string decison;//declaring variable used for decision 


int main () {
  cout << "Hello, Welcome to File Writer\n";

  cout<<"Enter name: ";
  // cin>>input;
  getline(cin, input);//Gettign the name of the employees 

  ofstream myfile;
  myfile.open ("list.csv");
  cout<<"Updating file... \n";
  myfile << input <<"\n";
  myfile.close();
//Added emplyees name into the file 
  cout<< "Add another (y/n)?";
  // cin>>decison;
  getline(cin, decison);
  if(decison=="Y"||decison=="y"){
    myfile.close();
    main();
  }else if(decison=="N"||decison=="n"){
    cout<<"Goodbye";
  }else{ 
    cout<<"Goodbye";
  }

  
  return 0;
}

//Exercise 3: File Reader

#include <iostream>
#include <sys/stat.h>
#include <string>
#include <fstream>
using namespace std;

string input;//declare variable that would store user input 
struct stat file;
int numberLoop =0;//counts the number of line read 

int main() {
  cout << "Hello, Welcome to File Reader\n";
  cout << "Please enter a valid filename:";
  cin>>input;
  //Getting input from user 

  if(stat(input.c_str(), &file) != 0) {
    //check if the file exist if not it will output message 
     cout << "Sorry "<< input << " does not exist. \n";
     main();
  }else{
    //if file found it will open and thne output the names 
     std::ifstream file("list.csv");
     std::string str;
     //using the while loop it allows the out each lien one by one and count the amount of lines.
  while (std::getline(file, str)) {
    numberLoop++;
    std::cout <<numberLoop<<":"<< str << "\n";
  }
  cout<<"Total number of lines read:"<<numberLoop;
  }
  //returns the result
  return 0;

}

//Exercise 3: File Reader

#include <iostream>
#include <sys/stat.h>
#include <string>
#include <fstream>
using namespace std;

string input;
struct stat file;
int numberLoop =0;

int main() {
  cout << "Hello, Welcome to File Reader\n";
  cout << "Please enter a valid filename:";
  cin>>input;


  if(stat(input.c_str(), &file) != 0) {
     cout << "Sorry "<< input << " does not exist. \n";
     main();
  }else{
     std::ifstream file("list.csv");
  std::string str;
  while (std::getline(file, str)) {
    numberLoop++;
    std::cout <<numberLoop<<":"<< str << "\n";
  }
  cout<<"Total number of lines read:"<<numberLoop;

  }
  return 0;

}


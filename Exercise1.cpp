//Exercise 1: File Exists
//importing
#include <iostream>
using namespace std;
#include <sys/stat.h>
#include <string>

string input;
struct stat file;

int main (){
  cout << "Hello, Welcome to File Exists\n";
  cout<< "Filename to check: ";
  cin>>input;

  if(stat(input.c_str(), &file) != 0) {
     cout << input << " does not exist \n";
     main();
  }else{
  cout << input << file.st_size << " bytes,last modifield: " << ctime(&file.st_mtime);
  }
  return 0;

}



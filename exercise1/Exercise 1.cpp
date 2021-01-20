//Exercise 1: File Exists
//importing
#include <iostream>
using namespace std;
#include <sys/stat.h>
#include <string>

string input;//declared variable to used for input 
struct stat file;

int main (){
  cout << "Hello, Welcome to File Exists\n";
  cout<< "Filename to check: ";
  cin>>input;//Getting input from the user 

//if statement used to check if the file exist 
  if(stat(input.c_str(), &file) != 0) {
     cout << input << " does not exist \n";
     //message if the file doesn't noe exist
     main();
  }else{
    //if the file exist th eprogrma would output the size 
  cout << input << file.st_size << " bytes,last modifield: " << ctime(&file.st_mtime);
  }
  return 0;

}

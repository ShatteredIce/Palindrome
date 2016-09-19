//C++ Project 2 - Nathan Purwosumarto - 9/19/16
//Palindrome - checks to see if a string is the same forwards and backwards
//Ignores spaces and punctuation, and is case unsensitive

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  //Set up two character arrays
  char str[81];
  char str2[81];
  fill (str, str + 80, ' ');
  //Gets user input
  cout << "Enter input to be palindrome-tested:" << endl;
  cin.get(str, 80);
  cin.get();
  //Puts the characters in backwards into the second array
  int counter = 80;
  int index = 0;
  for (int i = 0; i < 81; i++) {
    if(isalnum(str[counter])){
      str2[index] = str[counter];
      index++;
    }
    counter--;
  }
  str2[index] = '\0';
  //Checks if the string is a palindrome
  bool isPalindrome = true;
  index = 0;
  for (int i = 0; i < 81; i++) {
    if(isalnum(str[i])){
      if(tolower(str[i]) != tolower(str2[index])){
	isPalindrome = false;
	break;
      }
      index++;
    }
  }
  if(isPalindrome){
    cout << "Palindrome." << endl;
  }
  else{
    cout << "Not a palindrome." << endl;
  }
  return 0;
}

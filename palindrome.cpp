/*
This program will read in a series of characters, 80 at most. It removes all punctuation and spaces
 and changes from lowercase to uppercase. It will determineif it is a palindrome or
not and then print out "Palindrome" or "Not a palindrome."
Author: Jennifer Wang
Date: 9/19/21
*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main ()
{

  //variables
  int i = 0;
  int j = 0;
  char str[80];
  char strForward[80];
  char strBackward[80];
  
  cin.get(str, 80);
  cin.get();

  while (str[i] != '\0')
    {
      // if character is alphabetic, convert to uppercase
      if (isalpha(str[i])) {
	strForward[j]=toupper(str[i]);
	j++;
      }
     
      i++;

    }

  strForward[j] = '\0';
	
  //puts charaters in a cstring in reverse order
  for (int a = 0; a < strlen(strForward); a++)
    {
      strBackward[a]=strForward[strlen(strForward) - 1 - a];
       
    }

  strBackward[strlen(strForward)] = '\0';
  
  // check to see if it is a palindrome by comparing the two cstrings
  if (strcmp(strBackward,strForward) == 0)
    {
      //two strings are the same, print out "Palindrome"
      cout << "Palindrome" << endl;
    }
  else
    {
      //two strings are different, print out "Not a palindrome"
      cout << "Not a palindrome" << endl;
    }

  return 0;

}

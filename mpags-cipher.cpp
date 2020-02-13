#include <iostream>
#include <string>
#include <cctype>
int main()
{
  std::string in_str {""};
  std::cout << "Enter string: ";
  std::string out_str {""};
  char in_char{'x'};
  char out_char{'X'};
  int i{0};
  while(std::cin >> in_char)
  {
    if(isalpha(in_char))            // Check if character is alphabetic
    {
      if(!isupper(in_char))         // If it is alphabetic, check if it is lowercase
      {
        out_char = in_char - 32;    // Convert to uppercase
        std::cout << out_char;
        out_str[i] = out_char;
        i++;
        continue;
      }
      else
      {
      out_char = in_char;           // Otherwise leave it as it is
      std::cout << out_char;
      out_str[i] = out_char;
      i++;
      continue;
      }
    }
    else
    {
      out_char = 'X';
      std::cout << out_char;
      out_str[i] = out_char;
      i++;
      continue;
    }
    std::cout << out_str << std::endl;
  }
  return 0;
}

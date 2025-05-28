/*
Includes practices 1,


*/

//Includes
#include <string>
#include <cctype>
#include <cstdlib>

std::string alphabet_position(const std::string &text) {
  //Dec new string
  std::string result;
  bool first = true;
  
  for (unsigned char ch: text) {
    if (std::isalpha(ch)) {
      // lower cas and map
      int  pos = std::tolower(ch) - 'a' + 1;
      
      if (!first)
        result.push_back(' ');
      first = false;
      
      result += std::to_string(pos);
    }
  }
  
  return result;
}



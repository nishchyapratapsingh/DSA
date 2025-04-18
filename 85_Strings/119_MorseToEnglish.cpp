#include <bits/stdc++.h> 
string morseToEnglish(string morsecode) 
{
    // Write your code here
    

    unordered_map<string, char> morseToEng = {
        {".-", 'A'},   {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'},  {".", 'E'},
        {"..-.", 'F'}, {"--.", 'G'},  {"....", 'H'}, {"..", 'I'},   {".---", 'J'},
        {"-.-", 'K'},  {".-..", 'L'}, {"--", 'M'},   {"-.", 'N'},   {"---", 'O'},
        {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'},  {"...", 'S'},  {"-", 'T'},
        {"..-", 'U'},  {"...-", 'V'}, {".--", 'W'},  {"-..-", 'X'}, {"-.--", 'Y'},
        {"--..", 'Z'}
    };  

stringstream ss(morsecode);
string token, result;

while (ss >> token) {
        result+=morseToEng[token];
    }

    return result;


}

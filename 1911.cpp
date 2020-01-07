#include <iostream>
    #include <string>
    #include <sstream>
    #include <cctype>
     
    int main()
    {
    std::string str;
    int nums, words;
     
    while(std::getline(std::cin, str))
    {
    nums = 0;
    words = 0;
     
    std::istringstream iss(str);
    std::string tmp;
     
    while(iss.good())
    {
    iss >> tmp;
     
    for(int i=0; i<tmp.size(); ++i)
    {
    if(!std::isdigit(tmp[i]))
    {
    words++;
    nums--;
    break;
    }
    }
    nums++;
    }
     
    std::cout << nums << " " << words << "\n";
    }
     
    return 0;
    } 

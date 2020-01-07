#include <iostream>
#include <sstream>
#include <string>
 
int StringToInt(const std::string & Arg){
    int out;
    std::istringstream iss(Arg);
    iss >> out;
    return out;
}
 
std::string IntToString(const int Arg){
    std::ostringstream ss;
    ss << Arg;
    return ss.str();
}
 
std::string RemoveColon(const std::string & str2) {
    std::string str = str2;
    for(unsigned int i=0; i<str.length(); ++i){
        if(str[i] == ':') str.erase(i,1);
    }
    return str;
}
 
std::string AddColon(const std::string & str) {
    std::string out;
 
    if(str.length() == 1) out += ("00:0"+str);
    else if(str.length() == 2) out += ("00:"+str);
    else if(str.length() == 3) { out += ("0"+str); out.insert(2,":"); }
    else if(str.length() == 4) { out = str; out.insert(2,":"); }
    else out = str;
 
    return out;
}
 
std::string Invert(const std::string & str) {
    std::string out;
    for(unsigned int i=0; i<str.length(); ++i) {
        out.insert(0,str.substr(i,1));
    }
    return out;
}
 
bool Compare(const int hour) {
    std::string str1 = IntToString(hour);
    std::string str2 = Invert(str1);
    return (str1 == str2);
}
 
int main() {
    int N;
    std::string IN;
 
    std::cin >> N;
    for(unsigned int i=0; i<N; ++i) {
        std::cin >> IN;
        int HourNR = StringToInt(RemoveColon(IN));
        int Hour = 0;
        if(HourNR >= 2332) { std::cout << "00:00\n"; continue; }
        for(unsigned int j=0; Hour<2400; ++j) {
            if(Hour != 60) {
                if(HourNR < Hour){
                    if(Compare(Hour)) { std::cout << AddColon(IntToString(Hour)) << "\n"; break; }
                }
            }
            if(j == 60) { j = 0; Hour = (Hour - Hour%100) + 100; } else Hour++;
        }
    }
 
    return 0;
}

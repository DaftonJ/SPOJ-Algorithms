#include <iostream>
#include <string>

using namespace std;

void replace_all(std::string& str, const std::string& oldStr, const std::string& newStr)
{
    size_t pos = 0;
    while((pos = str.find(oldStr, pos)) != std::string::npos)
    {
        str.replace(pos, oldStr.length(), newStr);
        pos += newStr.length();
    }
}

int main (int argc, const char * argv[])
{
    string line;
    while (getline(cin,line)) {
        
        
        replace_all(line, "??=", "#");
        replace_all(line, "??/", "\\");
        replace_all(line, "??\'", "^");
        replace_all(line, "??(", "[");
        replace_all(line, "??)", "]");
        replace_all(line, "??!", "|");
        replace_all(line, "??<", "{");
        replace_all(line, "??>", "}");
        replace_all(line, "??-", "~");
        cout << line << "\n";
        line.clear();
    }

    return 0;
}

    #include <cstdlib>
    #include <iostream>
    #include <string>
    #include <iterator>
    #include <algorithm>
     
    using namespace std;
     
    int main(int argc, char *argv[])
    {
    char c;
    string s;
    while (cin >> c >> s)
    {
    remove_copy(s.begin(), s.end(), ostream_iterator<char>(cout), c);
    cout.put('\n');
    }
    return EXIT_SUCCESS;
    } 

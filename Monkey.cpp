#include<bits/stdc++.h>
using namespace std;
int main()
{

 std::string line;

    // Read input until EOF
    while (std::getline(std::cin, line)) {
        // Check the length of the input line
        if (line.length() < 1 || line.length() > 100001) {
            std::cerr << "Invalid input length\n";
            return 1; // Exit with an error code
        }

        // Remove extra spaces at the end
        line.erase(std::find_if(line.rbegin(), line.rend(), [](char ch) {
            return !std::isspace(ch);
        }).base(), line.end());

        // Remove spaces from the line
        line.erase(std::remove_if(line.begin(), line.end(), [](char ch) {
            return std::isspace(ch);
        }), line.end());

        // Sort the line in alphabetic order
        std::sort(line.begin(), line.end());

        // Output the result
        std::cout << line << std::endl;
    }
    return 0;
}
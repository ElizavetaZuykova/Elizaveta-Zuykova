#include <algorithm>
#include <string>
#include <iostream>
 
int main()
{
    std::string n = "acb"; 
    std::sort(n.begin(), n.end());
    do
    {
        std::cout << n << std::endl;
    } while(std::next_permutation(n.begin(), n.end()));
}

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

int main(int charc, char **argv)
{
    std::string word;
    std::list<std::string> words;
    std::list<std::string> lower_case_words;

    while (std::cin >> word)
    {
        if (word == "#") break;
        words.push_front(word);
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        lower_case_words.push_front(word);
    }

    for (auto i : lower_case_words)
        std::cout << i << '\n';
	return (0);
}


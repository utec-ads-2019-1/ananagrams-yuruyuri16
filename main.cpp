#include <iostream>
#include <string>
#include <list>
#include <algorithm>

char *get_configs(std::string word)
{
    int size;
    int i;
    char *chars;

    size = word.size();
    chars = new char[size];
    for (i = 0; i < size; ++i)
    {
        chars[i] = word[i];
    }
    return chars;
}

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
        std::cout << get_configs(i)[0] << '\n';
	return (0);
}

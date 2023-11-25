#include "Ejercicio02.h"

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    std::unordered_map<std::string, std::vector<std::string>> anagramMap;
    for (const std::string& word : words) 
    {
        std::string sortedWord = word;
        std::sort(sortedWord.begin(), sortedWord.end());

        anagramMap[sortedWord].push_back(word);
    }

    std::vector<std::vector<std::string>>* result = new std::vector<std::vector<std::string>>;

    for (auto it = anagramMap.begin(); it != anagramMap.end(); ++it) 
    {
        result->push_back(it->second);
    }
    return result;
}

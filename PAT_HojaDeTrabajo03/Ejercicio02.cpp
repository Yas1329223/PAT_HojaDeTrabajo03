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

   auto result = new vector<vector<string>>;
    for (const auto& pair : anagramMap)
    {
        result->push_back(pair.second);
    }
    return result;
}

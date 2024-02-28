#include <iostream>
#include <string>
#include <algorithm>
#include <random>

std::string reverseString(std::string str) {
    std::reverse(str.begin(), str.end());
    return str;
}

std::string removeVowels(std::string str) {
    std::string vowels = "aeiouAEIOU";
    str.erase(std::remove_if(str.begin(), str.end(), [&vowels](char c) {
        return vowels.find(c) != std::string::npos;
        }), str.end());
    return str;
}

std::string removeConsonants(std::string str) {
    std::string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    str.erase(std::remove_if(str.begin(), str.end(), [&consonants](char c) {
        return consonants.find(c) != std::string::npos;
        }), str.end());
    return str;
}

std::string shuffleString(std::string str) {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(str.begin(), str.end(), g);
    return str;
}

int main() {
    setlocale(LC_ALL, "RUS");
    std::string word;
    int choice;

    std::cout << "(Работает только с английскими словами)Введите слово: ";
    std::cin >> word;

    std::cout << "Выберите действие:\n";
    std::cout << "1. Слово вывести задом наперед\n";
    std::cout << "2. Слово вывести без гласных\n";
    std::cout << "3. Слово вывести без согласных\n";
    std::cout << "4. Буквы в слове рандомно меняются местами\n";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Результат: " << reverseString(word) << "\n";
        break;
    case 2:
        std::cout << "Результат: " << removeVowels(word) << "\n";
        break;
    case 3:
        std::cout << "Результат: " << removeConsonants(word) << "\n";
        break;
    case 4:
        std::cout << "Результат: " << shuffleString(word) << "\n";
        break;
    default:
        std::cout << "Неверный выбор действия\n";
    }

    return 0;
}
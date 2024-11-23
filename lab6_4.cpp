#include "lab.h"


//4
std::map<std::string, int> wordsMapCounter(const std::string& str) {
    std::map<std::string, int> R; // словарь для подсчета слов
    std::string w;                    // текущая строка

    for (char ch : str) {
        // проверяем, является ли символ буквой или цифрой
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch;
        }
        else if (!w.empty()) { // если строка не пустая и не является ни буквой ни цифрой, то это разделитель
            R[w]++;      // увеличиваем счетчик слова
            w.clear();           // очищаем текущую строку
        }
    }

    // добавляем последнее слово, если строка не заканчивается разделителем
    if (!w.empty()) {
        R[w]++;
    }

    return R; // возвращаем словарь
}

int main() {
    std::map<std::string, int> words = wordsMapCounter("can you can");
    std::cout << words["can"] << std::endl;
    std::cout << words["you"] << std::endl;

    return 0;
}
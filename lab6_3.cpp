#include "lab.h"


//3
int wordsCounter(const std::string& str) {
    std::set<std::string> words; // множество для хранения уникальных слов
    std::string w;            // текущее слово

    for (char ch : str) {
        // проверяем, является ли символ буквой или цифрой
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch; // добавляем символ к текущему слову
        }
        else if (!w.empty()) { // если w не пустая и не равна букве или цифре, то это разделитель
            words.insert(w); // добавляем слово в множество
            w.clear();       // очищаем это слово
        }
    }

    if (!w.empty()) { // добавляем последнее слово, если строка не заканчивается разделителем
        words.insert(w);
    }

    return words.size(); // возвращаем количество уникальных слов
}

int main() {
    std::string s = "can you can";
    int words = wordsCounter(s);
    std::cout << words << std::endl;

    std::string s2 = "Hello, hello. HELLO!";
    int words2 = wordsCounter(s2);
    std::cout << words2 << std::endl;

    return 0;
}
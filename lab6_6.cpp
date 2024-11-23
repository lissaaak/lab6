#include "lab.h"


//6
int diffWordsCounter(const std::string& str) {
    std::set<std::string> S; // множество для хранения уникальных слов
    std::string w;                  // текущая строка

    for (char ch : str) {
        // проверяем, является ли символ буквой или цифрой
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch;
        }
        else if (!w.empty()) { // если строка не пустая и не равна ни букве ни цифре, то это разделитель
            // преобразуем слово в нижний регистр, чтобы CAN Can и can  считалось за одно слово
            std::transform(w.begin(), w.end(), w.begin(), ::tolower);
            S.insert(w);
            w.clear(); // Очищаем временную строку
        }
    }

    // добавляем последнее слово, если строка не заканчивается разделителем
    if (!w.empty()) {
        std::transform(w.begin(), w.end(), w.begin(), ::tolower);
        S.insert(w);
    }

    return S.size(); //количество различных слов
}

int main() {
    std::string s = "can you can a can";
    int words = diffWordsCounter(s);

    std::cout << words << std::endl;

    return 0;
}
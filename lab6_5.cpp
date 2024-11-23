#include "lab.h"


//5
std::vector<std::string> uniqueWords(const std::string& str) {
    std::set<std::string> S;  // множество для хранения уникальных слов
    std::string w;                 // текущая строка

    for (char ch : str) {
        // проверяем, является ли символ буквой или цифрой
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch;
        }
        else if (!w.empty()) {   // если строка не пустая и не равна ни букве ни цифре, то это разделитель
            // преобразуем слово в нижний регистр, чтобы CAN Can и can  считалось за одно слово
            std::transform(w.begin(), w.end(), w.begin(), ::tolower);
            S.insert(w);  // добавляем слово в множество
            w.clear();            // очищаем текущую строку
        }
    }

    // добавляем последнее слово, если строка не заканчивается разделителем
    if (!w.empty()) {
        std::transform(w.begin(), w.end(), w.begin(), ::tolower);
        S.insert(w);
    }

    return std::vector<std::string>(S.begin(), S.end()); // преобразуем множество в вектор
}

int main() {
    std::vector<std::string> unique = uniqueWords("Can you can can");
    for (int i = 0; unique.size(); ++i) {
        std::cout << unique[i] << " ";
    }

    return 0;
}
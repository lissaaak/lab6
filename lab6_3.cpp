#include "lab.h"


//3
int wordsCounter(const std::string& str) {
    std::set<std::string> words; // ��������� ��� �������� ���������� ����
    std::string w;            // ������� �����

    for (char ch : str) {
        // ���������, �������� �� ������ ������ ��� ������
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch; // ��������� ������ � �������� �����
        }
        else if (!w.empty()) { // ���� w �� ������ � �� ����� ����� ��� �����, �� ��� �����������
            words.insert(w); // ��������� ����� � ���������
            w.clear();       // ������� ��� �����
        }
    }

    if (!w.empty()) { // ��������� ��������� �����, ���� ������ �� ������������� ������������
        words.insert(w);
    }

    return words.size(); // ���������� ���������� ���������� ����
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
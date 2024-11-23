#include "lab.h"


//5
std::vector<std::string> uniqueWords(const std::string& str) {
    std::set<std::string> S;  // ��������� ��� �������� ���������� ����
    std::string w;                 // ������� ������

    for (char ch : str) {
        // ���������, �������� �� ������ ������ ��� ������
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch;
        }
        else if (!w.empty()) {   // ���� ������ �� ������ � �� ����� �� ����� �� �����, �� ��� �����������
            // ����������� ����� � ������ �������, ����� CAN Can � can  ��������� �� ���� �����
            std::transform(w.begin(), w.end(), w.begin(), ::tolower);
            S.insert(w);  // ��������� ����� � ���������
            w.clear();            // ������� ������� ������
        }
    }

    // ��������� ��������� �����, ���� ������ �� ������������� ������������
    if (!w.empty()) {
        std::transform(w.begin(), w.end(), w.begin(), ::tolower);
        S.insert(w);
    }

    return std::vector<std::string>(S.begin(), S.end()); // ����������� ��������� � ������
}

int main() {
    std::vector<std::string> unique = uniqueWords("Can you can can");
    for (int i = 0; unique.size(); ++i) {
        std::cout << unique[i] << " ";
    }

    return 0;
}
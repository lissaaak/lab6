#include "lab.h"


//6
int diffWordsCounter(const std::string& str) {
    std::set<std::string> S; // ��������� ��� �������� ���������� ����
    std::string w;                  // ������� ������

    for (char ch : str) {
        // ���������, �������� �� ������ ������ ��� ������
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch;
        }
        else if (!w.empty()) { // ���� ������ �� ������ � �� ����� �� ����� �� �����, �� ��� �����������
            // ����������� ����� � ������ �������, ����� CAN Can � can  ��������� �� ���� �����
            std::transform(w.begin(), w.end(), w.begin(), ::tolower);
            S.insert(w);
            w.clear(); // ������� ��������� ������
        }
    }

    // ��������� ��������� �����, ���� ������ �� ������������� ������������
    if (!w.empty()) {
        std::transform(w.begin(), w.end(), w.begin(), ::tolower);
        S.insert(w);
    }

    return S.size(); //���������� ��������� ����
}

int main() {
    std::string s = "can you can a can";
    int words = diffWordsCounter(s);

    std::cout << words << std::endl;

    return 0;
}
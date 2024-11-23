#include "lab.h"


//4
std::map<std::string, int> wordsMapCounter(const std::string& str) {
    std::map<std::string, int> R; // ������� ��� �������� ����
    std::string w;                    // ������� ������

    for (char ch : str) {
        // ���������, �������� �� ������ ������ ��� ������
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            w += ch;
        }
        else if (!w.empty()) { // ���� ������ �� ������ � �� �������� �� ������ �� ������, �� ��� �����������
            R[w]++;      // ����������� ������� �����
            w.clear();           // ������� ������� ������
        }
    }

    // ��������� ��������� �����, ���� ������ �� ������������� ������������
    if (!w.empty()) {
        R[w]++;
    }

    return R; // ���������� �������
}

int main() {
    std::map<std::string, int> words = wordsMapCounter("can you can");
    std::cout << words["can"] << std::endl;
    std::cout << words["you"] << std::endl;

    return 0;
}
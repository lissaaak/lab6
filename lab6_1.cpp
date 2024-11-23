#include "lab.h"


//1
// ������� ������ �������� � ��������� [first, last)
std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    while (first != last) {
        if (*first == el) { //���� ������� ������� ����� ��������, �� ���������� ��������
            return first;
        }
        ++first; // ��������� � ���������� ��������
    }
    return last; // ���� ������� �� ������, ���������� �������� last
}

int main() {
    std::vector<int> v = { 6, 8, 1, 2, 3, 4, 5 };

    std::vector<int>::iterator it = Find(v.begin(), v.end(), 2); //���� ������

    if (it != v.end()) {
        std::cout << *it << std::endl;
    }
    else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
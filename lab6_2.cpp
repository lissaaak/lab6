#include "lab.h"


//2
//������� ��� ������ �������� � ��������������� ���������
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    while (first < last) {
        auto mid = first + ((last - first) / 2); // ������� �������� ���������

        if (*mid == el) {
            return mid; // ���� ������� ������� ����� ��������, �� ���������� ��������
        }
        else if (*mid < el) {
            first = mid + 1; // ���� �������� ������ �������� �����, �� ���� � ������ ��������,���������� ��������
        }
        else {
            last = mid; // ���� � ����� ��������, ���� ������� ������ ��������
        }
    }
    return last; //���������� last, ���� ������� �� ������
}

int main() {
    std::vector<int> v = { 1, 2, 3, 4, 5 };

    std::vector<int>::iterator it = findInSorted(v.begin(), v.end(), 2);// ���� ������
    if (it != v.end()) {
        std::cout << *it << std::endl;
    }
    else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
#include "lab.h"


//9

bool yb(int a, int b) {
    return a > b;  // ���������� true, ���� a ������ b, ��� ���������� �� ��������
}

void Sort(std::list<int>& nums) {
    nums.sort(yb);
}

int main() {
    std::list<int> nums = { 1, 5, 4, -3 };
    Sort(nums);

    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}

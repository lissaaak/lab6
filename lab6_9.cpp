#include "lab.h"


//9

bool yb(int a, int b) {
    return a > b;  // возвращаем true, если a больше b, для сортировки по убыванию
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

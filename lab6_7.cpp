#include "lab.h"


//7
void reverseNum(std::list<int>& nums) {
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        i = nums.insert(i, -(*i));      // вставляем отрицательное значение перед тем значением, на которое указывает i
        ++i; // сдвигаем иетратор для следующего шага
    }
}

int main() {
    std::list<int> nums = { 1, 5, 4, -3 };

    reverseNum(nums);

    for (int num : nums) {
        std::cout << num << " ";
    }

    return 0;
}

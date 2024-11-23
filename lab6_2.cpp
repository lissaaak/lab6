#include "lab.h"


//2
//функция для поиска элемента в отсортированном диапазоне
std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    while (first < last) {
        auto mid = first + ((last - first) / 2); // находим середину диапазона

        if (*mid == el) {
            return mid; // если текущий элемент равен искомому, то возвращаем итератор
        }
        else if (*mid < el) {
            first = mid + 1; // если середина меньше искомого числа, то ищем в правой половине,увеличивая серидину
        }
        else {
            last = mid; // ищем в левой половине, если среднее больще искомого
        }
    }
    return last; //возвращаем last, если элемент не найден
}

int main() {
    std::vector<int> v = { 1, 2, 3, 4, 5 };

    std::vector<int>::iterator it = findInSorted(v.begin(), v.end(), 2);// ищем двойку
    if (it != v.end()) {
        std::cout << *it << std::endl;
    }
    else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
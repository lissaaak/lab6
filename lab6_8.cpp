#include "lab.h"


//8
void plusesDeleter(std::vector<int>& v) {
    for (auto i = v.begin(); i != v.end(); ) {
        if (*i > 0) {
            i = v.erase(i);  // удаляем элемент и получаем новый итератор на следующий элемент
        }
        else {
            ++i;  // переходим к следующему элементу, если не удаляли
        }
    }
}

int main() {
    std::vector<int> v = { 1, 0, -8, -9, 0, 10, 23, -7 };

    plusesDeleter(v);

    for (int num : v) {
        std::cout << num << " ";
    }

    return 0;
}
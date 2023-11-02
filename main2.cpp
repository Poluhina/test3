# test3
#include <iostream>

int a = 0; 'эта строка определяет целочисленную переменную "a" и инициализирует ее значение 0

void staticMemory() это объявление функции staticMemory(), которая не возвращает значение (void) Она изпользует std::cout чтобы выводить текущее значение переменной "a", а затем увеличивает значение "a" на 1
{
    std::cout << "a: " << a << std::endl;
    a += 1;
}

int main() это главная функция программы м
{
    staticMemory(); // prints 0
    staticMemory(); // prints 1
    staticMemory(); // prints 2
    return 0;
}

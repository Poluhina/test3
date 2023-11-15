#include <stdlib.h>
#include <iostream>

int* stackMemory1()
{
    int a = 1;            // Локальная переменная 'a' выделяется на стеке.
    return &a;            // Возвращается адрес 'a', который является указателем на локальную переменную.
}

int* stackMemory2()
{
    int b = 2;            // Локальная переменная 'b' выделяется на стеке.
    return &b;            // Возвращается адрес 'b', который является указателем на другую локальную переменную.
}

int main()
{
    int* b = stackMemory1(); // 'b' теперь указывает на адрес в памяти на стеке
    int a1 = *b;             // 

    int* c = stackMemory2(); // 'c' теперь указывает на другой адрес в памяти на стеке, выделенный функцией stackMemory2().
    int a2 = *c;              

    int a3 = *b;             

    std::cout << a1 << std::endl;                      // выводит 1
    std::cout << a2 << std::endl;                      // выводит 2
    std::cout << a3 << std::endl;                      // выводит неопределенный ответ

    std::cout << ((std::byte*)b - (std::byte*)c) << std::endl;  // выводит 0


    return 0;
}

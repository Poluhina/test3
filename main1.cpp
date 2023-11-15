# lab1
int main() начало функции
{
    TwoInts i2 = { }; иницилизация значений 'i2'   'a' и 'b'
    i2.a = 5;
    i2.b = 7;

    std::cout << i2.a << std::endl; Вывод значений
    std::cout << i2.b << std::endl;
    
    StructWithArray s = { };
    s.arr[0] = 10;

    StructWithArray s1 = { };
    s1.arr[0] = 15;

    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;

    std::cout << s.arr[0] << std::endl;
    s.arr[0] = 25;
    std::cout << s.arr[0] << std::endl;
    sPointer->arr[0] = 30;   Создание указателя sPointer, который указывает на структуру s, и изменение значения первого элемента массива arr через указатель
    std::cout << s.arr[0] << std::endl;

    sPointer = &s1;  Вывод значения
    sPointer->arr[0] = 35;
    std::cout << s.arr[0] << std::endl;
    std::cout << s1.arr[0] << std::endl;

    StructWithArray structArray[2] = { }; Изменение значения первого элемента массива arr через указатель sPointer и вывод обновлённого значения
    structArray[0].arr[3] = 77;
    structArray[1].someNumber = &structArray[0].arr[3];

    sPointer = &s;
    int* pointer = &sPointer->arr[3];
    s.arr[3] = 72;
    std::cout << *pointer;

    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));
    return 0;
}

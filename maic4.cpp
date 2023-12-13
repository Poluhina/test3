#include <iostream>

struct DynamicArray {
  int* array; //указатель на массив
  size_t size; //текущий размер массива
  size_t capacity; //максимальная вместимость массива
};

DynamicArray* createDinamicArrayWithCapacity(); {
return new DynamicArray(); //создание динамического массива и возвращение указателя на него
}

  

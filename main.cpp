#include <iostream>

/*
1. Задать целочисленный массив, состоящий из элементов 0 и 1. 
Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. 
Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 
(** без применения if-else, switch, () ? :);
2. Задать пустой целочисленный массив размером 8. 
Написать функцию, которая с помощью цикла заполнит его значениями
 1 4 7 10 13 16 19 22;
3. * Написать функцию, в которую передается не пустой одномерный 
целочисленный массив, функция должна вернуть истину если в массиве 
есть место, в котором сумма левой и правой части массива равны. 
Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, 
checkBalance ([2, 1, 1, 2, 1]) → false, 
checkBalance ([10, || 1, 2, 3, 4]) → true. 
Абстрактная граница показана символами ||, эти символы в массив не входят.
4. * Написать функцию, которой на вход подаётся одномерный массив и 
число n (может быть положительным, или отрицательным), при этом функция
должна циклически сместить все элементы массива на n позиций.
5. ** Написать функцию из первого задания так, чтобы она работала с 
аргументом переменной длины.
6. ** Написать все функции в отдельных файлах в одном пространстве имён, 
вызвать их на исполнение в основном файле программы используя указатели 
на функции.

double power (double n, unsigned p=2)
{
    while (p-->1)
    {
        n *=n;
    }
    return n;
}

unsigned fibonacci (int n)//рекурсия
{
    if (n==0 || n==1)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
*/
const int x = 10;

void reverse(int (&n)[x])
{
    int schetchik;
    for (schetchik=0;schetchik<x;schetchik++)
    {
        n[schetchik] = !(n[schetchik]);
    }
}

/*template <typename Firsttype, typename... Types>//шаблон, принимаем неограничеснное колво значений
void print(Firsttype first_argument, Types... types)
{
    std::cout << first_argument<< " ";
    print(types...);
}

double square (double x)
{
        return x *= x;
}


int bar(int* x, unsigned size)
{
    int schetchik;
    for (schetchik=0;schetchik<size;schetchik++)
    {
        std::cout<<((x[schetchik]==0)?"1":"0");
    }
    return bar;
}
*/
int main()
{
    /*
    
    double n =3.0;
    std::cout<< square(n);
    
    int i=4;
    double d= 3.14;
    float f= 1.43f;
    print(i,d,f);
    
    std::cout << bar(massive, 10);

    std::string s="Hello, world!\n";
    print(s);
    std::cout << fibonacci(5)<<"\n";
    std::cout << power(2, 3)<<"\n";
    std::cout << power(5)<<"\n";
    */
   int massive[x] = {1, 1, 1, 1, 0, 1, 0, 0, 1, 0};
   reverse(massive);
   for (int i=0;i<x;i++)
       {
           std::cout << massive[i] << " "; 
       }
    return 0;
}
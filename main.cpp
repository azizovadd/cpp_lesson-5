#include <iostream>
#include "functions.hpp"






using pointer_to_void = void(*)(int [],unsigned);
using pointer_to_void_sdvig = void(*)(int [], unsigned , int);
using pointer_to_int = int(*)(int [],unsigned);
using pointer_to_bool = bool(*)(int* ,unsigned);


int main()
{
    //pointer_to_void Reverse = lesson5::reverse;
    pointer_to_void MASSINPUT = lesson5::mass_input;
    pointer_to_bool CHECKBALANCE = lesson5::checkBalance;
    pointer_to_void_sdvig SDVIG_1 = lesson5::sdvig_1;
    pointer_to_void_sdvig MASS_SDVIG = lesson5::mass_sdvig;
    pointer_to_int MASS_SUM = lesson5::mass_sum;
   
    /* 
    Часть задания 1+5. Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. 
    Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 (** без применения if-else, switch, () ? :)
    */
    int massiv[] = {};
    unsigned mass_size;
    std::cout<< "Reversed mass: ";
    lesson5::print_mass1(1.00, false, 0, 1);
        /* 
    std::cout<< "Original array: ";

      for (unsigned schtchk = 0; schtchk < 8; schtchk ++)
    {
        std::cout<< massiv[schtchk] <<" ";
    }
    
    reverse (massiv, mass_size);
    std::cout<< "\nChanged array: ";
        for (unsigned schtchk = 0; schtchk < mass_size; schtchk ++)
    {
        std::cout<< massiv[schtchk] <<" ";
    }
    */

     /* 
    Часть задания 2. Задать пустой целочисленный массив размером 8. 
    Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22;
    */
    int massiv2[]={};
    MASSINPUT(massiv2, 8);
    std::cout<< "\nCreate array where every following number is previous number + 3: ";
     for (unsigned schtchk2 = 0; schtchk2 < 8; schtchk2 ++)
    {
        std::cout<< massiv2[schtchk2] <<" ";
    }
    /* 
    Часть задания 3. Написать функцию, в которую передается не пустой одномерный целочисленный массив, функция должна вернуть истину если в массиве 
    есть место, в котором сумма левой и правой части массива равны. Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance ([2, 1, 1, 2, 1]) → false, 
    checkBalance ([10, || 1, 2, 3, 4]) → true. Абстрактная граница показана символами ||, эти символы в массив не входят
    */
    int massiv3[] ={};
    int length;
    std::cout<<"\nInput length of array: ";
    std::cin>>length;
    std::cout<<"\nInput "<<length<<" numbers: ";
    for (int i=0; i<length; i++)
    {
        std::cin>>massiv3[i];
    } 
    std::cout<<"Array equality: "<<std::boolalpha<<CHECKBALANCE(massiv3,length)<<"\n";
    /*
     Часть задания 4. Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным, или отрицательным), 
     при этом функция должна циклически сместить все элементы массива на n позиций.
    */
    int massiv4[] ={1,2,3,4,5};
    std::cout<<"\nOriginal array: 1 2 3 4 5 ";
    int shift;
    std::cout<<"\nInput shift size: ";
    std::cin>>shift;
    std::cout<<"\nShifted array: ";
    MASS_SDVIG(massiv4, 5, shift);
    for (unsigned schtchk4 = 0; schtchk4 < 5; schtchk4 ++)
    {
        std::cout<<massiv4[schtchk4]<<" ";
    }
    return 0;
}

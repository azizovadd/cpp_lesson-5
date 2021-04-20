namespace lesson5
{
    void reverse( int numbers[], unsigned kolichestvo); //функция перевода числа из 1 в 0 и наоборот
 
    void mass_input ( int numbers2[], unsigned kolichestvo2); //функция добавления 3 к каждому следующему числу
   
    int mass_sum ( int numbers3[], unsigned kolichestvo3); //функция расчета суммы всех чисел
   
    bool checkBalance (int* numbers3, unsigned kolichestvo3); //сверка сумм по обе части массива
    
    void sdvig_1 (int numbers4[], unsigned kolichestvo4, int sdvig); //сдвиг на одну ячейку 
    
    void mass_sdvig (int numbers4[], unsigned kolichestvo4, int sdvig); //сдвиг на несколько ячеек

    void print_mass1();

    template<typename begin, typename ... end>

    void print_mass1(begin mass_begin, end ... mass_end)
    {
    
        std::cout<<(1-mass_begin)<<" ";
        print_mass1(mass_end...);
    }
}
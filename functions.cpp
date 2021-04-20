namespace lesson5
{
    
    void reverse( int numbers[], unsigned kolichestvo) //функция перевода числа из 1 в 0 и наоборот
        {
            for (unsigned schetchik = 0; schetchik < kolichestvo; schetchik++)
            {
            /* if (numbers[schetchik]==1)
                {
                    numbers[schetchik] = 0;
                }
                else if (numbers[schetchik] == 0)
                {
                numbers[schetchik] = 1; 
                }
                */
            numbers[schetchik] = !numbers[schetchik];
            }
        }

    void mass_input ( int numbers2[], unsigned kolichestvo2) //функция добавления 3 к каждому следующему числу
    {
        numbers2[0]=1;
        for (unsigned schetchik = 1; schetchik < kolichestvo2; schetchik++)
        {
            numbers2[schetchik]=numbers2[schetchik-1]+3;
        }
    }

    int mass_sum ( int numbers3[], unsigned kolichestvo3) //функция расчета суммы всех чисел
    {
        int summa_chisel=0;
        for (unsigned schetchik = 0; schetchik < kolichestvo3; schetchik++)
        {
            summa_chisel += numbers3[schetchik];
        }
        return summa_chisel;
    }

    bool checkBalance (int* numbers3, unsigned kolichestvo3) //сверка сумм по обе части массива
    {
        for (unsigned schetchik = 0; schetchik < kolichestvo3; schetchik++)
        {
            int sum_right = mass_sum (numbers3, schetchik);
            int sum_left = mass_sum (numbers3+schetchik, kolichestvo3 - schetchik);
            if (sum_right == sum_left)
            {
                return true;
            }
            
        }
        return false;
    }

    void sdvig_1 (int numbers4[], unsigned kolichestvo4, int sdvig) //сдвиг на одну ячейку 
    {          
            if (sdvig > 0)
            {
                int start = numbers4[kolichestvo4-1];
                for (unsigned schetchik = (kolichestvo4-1); schetchik > 0; schetchik--)
                {
                    numbers4[schetchik]=numbers4[schetchik-1];
                }
                numbers4[0]=start;
            }
            else
            {
                int start = numbers4[0];
                for (unsigned schetchik = 0; schetchik < kolichestvo4; schetchik++)
                {
                    numbers4[schetchik]=numbers4[schetchik+1];
                }
                numbers4[kolichestvo4-1]=start;
            }      
    }

    void mass_sdvig (int numbers4[], unsigned kolichestvo4, int sdvig) //сдвиг на несколько ячеек
    {
        if (sdvig>0)
        {
            for (unsigned obshiy_sdvig = 0; obshiy_sdvig < sdvig; obshiy_sdvig++)
            {
                sdvig_1(numbers4, kolichestvo4, sdvig);     
            }
        }
        else
        {
            for (unsigned obshiy_sdvig = 0; obshiy_sdvig < -sdvig; obshiy_sdvig++)
            {
                sdvig_1(numbers4, kolichestvo4, sdvig);     
            }
        }
    }

    void print_mass1()
    {
    }
}
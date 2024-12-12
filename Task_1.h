#include <iostream>
#include <cstdio>

class task1{
public:
    task1(bool IsTest){
        if (IsTest == false)
        {
            int checker = 1;
            char *arr = new char[80];
            int lenth;
            while (checker != 0)
            {
                arr[0] = 'f';
                delete[] arr;
                arr = new char[80];
                std::cout << "Введите группы нулей и единиц, разделенные пробелами: ";
                char a = getchar();
                a = getchar();
                lenth = 1;
                while (a != '\n')
                {
                    arr[lenth - 1] = a;
                    lenth++;
                    a = getchar();
                }
                lenth--;
                checker = checkZerosAndOnes(arr, lenth);
                if (checker != 0)
                {
                    std::cout << "В введенных группах не только нули и единицы" << std::endl;
                }
                
            }
            std::cout << "В группах с нечетным количеством символов " << count(arr, lenth) << " единиц\n";
            delete[] arr;
        }
    }



    int checkZerosAndOnes(char *arr, int lenth){
        int checker = 0;
        for (int i = 0; i < lenth; i++)
        {
            if (arr[i] != ' ' and arr[i] != '1' and arr[i] != '0')
            {
                checker++;
            }
            
        }
        return checker;
        
    }

    int count(char *arr, int lenth){
        int count = 0;
        int checker = 0;
        for (int i = 0; i < lenth; i++)
        {
            checker++;
            if (arr[i] == ' ' or i == lenth - 1)
            {
                if (i != lenth - 1)
                {
                    checker--;
                }
                if (checker % 2 != 0)
                {
                    for (int j = 0; j < checker; j++)
                    {
                        
                        if (i != lenth - 1)
                        {                        
                            if (arr[i - 1 - j] == '1')
                            {
                                count++;
                            }
                        }
                        else{
                            if (arr[i - j] == '1')
                            {
                                count++;
                            }
                        }
                        
                    }
                    
                }
                checker = 0;
                
            }
            
        }
        return count;
        
    }
};
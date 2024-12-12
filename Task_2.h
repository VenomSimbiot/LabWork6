#include <iostream>
#include <cstdio>

class task2{
public:
    task2(bool IsTest){
        if (IsTest == false)
        {
            int checker = 1;
            char *arr = new char[80];
            int lenth;
            std::cout << "Введите свою строку: ";
            char a = getchar();
            a = getchar();
            lenth = 0;
            while (a != '\n')
            {
                arr[lenth] = a;
                lenth++;
                a = getchar();
            }
            std::cout << "Введите подстроку - слово: ";
            char *word = new char[80];
            a = getchar();
            int lenth2 = 0;
            while (a != '\n')
            {
                word[lenth2] = a;
                lenth2++;
                a = getchar();
            }
            std::cout << "Введите необходимый символ: ";
            char c = getchar();
            vivod(arr, lenth, word, lenth2 , c);
            std::cout << "\n";
            delete[] word;
            delete[] arr;
        }
    }

    void vivod(char *arr, int length, char *word, int length2, char c){
        int ch = 0;
        for (int i = 0; i < length; i++)
        {
            int kek = 0;
            ch++;
            if (arr[i] == ' ' or i == length - 1)
            {
                if (i != length - 1)
                {
                    ch--;
                }
                
                if (ch >= length2)
                {
                    int ch2 = 0;
                    if (i == length - 1)
                    {
                        kek++;
                    }
                    for (int j = 0; j < length2; j++)
                    {
                        if (arr[i - length2 + j + kek] != word[j])
                        {
                            ch2++;
                        }
                    }
                    if (ch2 == 0)
                    {
                        if (i == length - 1)
                        {
                            kek++;
                        }
                        else{
                            std::cout << c;
                        }
                        
                    }
                    ch = 0;
                }
            }
            std::cout << arr[i];
            if (kek == 2)
            {
                std::cout << c;
            }
            
        }
        
    }

};
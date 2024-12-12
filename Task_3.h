#include <iostream>
#include <cstdio>

class task3{
private:
    char **strings;
    int *lengths;
public:
    task3(bool IsTest){
        if (IsTest == false)
        {
            int n;
            std::cout << "Введите количество строк: "; std::cin >> n;
            strings = new char*[n];
            lengths  = new int[n];
            for (int i = 0; i < n; i++)
            {
                elementStrings(strings, i);
            }
            int medium = 0;
            for (int i = 0; i < n; i++)
            {
                medium += lengths[i];
            }
            medium /= n;
            polnyvivod(strings, medium, lengths, n);
            std::cout << "\n";
            for (int i = 0; i < n; i++)
            {
                delete[] strings[i];
            }
            delete[] strings;
            delete[] lengths;
            
        }
    }

    void elementStrings(char** strings, int i){
        char *str = new char[80];
        char a = getchar();
        if (a == '\n')
        {
            a = getchar();
        }
        
        
        int lenth = 0;
        while(a != '\n'){
            str[lenth] = a;
            lenth++;
            a = getchar();
        }
        lengths[i] = lenth;
        strings[i] = str;
    }

    void vivod(char* str, int len, int med){
        if (len >= med)
        {
            for (int i = 0; i < med; i++)
            {
                std::cout << str[i];
            }
            
        }
        else{
            for (int i = 0; i < len; i++)
            {
                std::cout << str[i];
            }
            for (int i = 0; i < (med - len); i++)
            {
                std::cout << " ";
            }
            
        }
        
        
    }

    void polnyvivod(char** strs, int med, int* len, int n){
        for (int i = 0; i < n; i++)
        {
            vivod(strs[i], len[i], med);
            std::cout << ",";
        }
        
    }


};
#include <iostream>
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"



int main(){
    std::cout << "Добро пожаловать в 6 лабораторную работу по предмету Основы Алгоритмизации и Программирования\n";
    std::cout << "Выполнил студент группы 453502 Филиповский Владислав Вадимович\nВариант 5\n\n";
    char sc = '0';
    while (sc != '1')
    {
        
    
    
        std::cout << "Введите номер задания (1, 2 или 3): ";
        int task;
        std::cin >> task;
        while (task < 1 or task > 3)
        {
            std::cout << "Пожалуйста, введите номер задания (1, 2 или 3): ";
            std::cin >> task;;
        }
        switch (task)
        {
            case 1:
            {
                task1 task1(false);
                break;
            }
            case 2:
            {
                task2 task2(false);
                break;
            }
            case 3:
            {
                task3 task3(false);
                break;
            }
        }
        std::cout << "Введите 1 если хотите закончить и что либо другое для перезапуска программы: ";
        sc = getchar();
    }
    return 0;
}
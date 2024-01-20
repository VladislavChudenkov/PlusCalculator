#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double valueOne, valueTwo, valueThree, stepen, result{};
    int move;
        while (true)
        {
            cout << "Введите первое число:";
            cin >> valueOne;
            cout << "Введите второе число:";
            cin >> valueTwo;
            cout << "Введите действие:\n0.Выйти из программы\n1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление\n5.Нахождение квадратного корня\n6.Ввод числа в степень\n7.Факториал числа\n8.Найти 1% от числа\n";
            cin >> move;
            switch (move)
            {
            case 0: 
            {
                return 0;
            }
            case 1:
            {
                valueThree = valueOne + valueTwo;
                cout << "Сумма чисел = " << valueThree;
                break;
            }
            case 2:
            {
                valueThree = valueOne - valueTwo;
                cout << "Разность чисел = " << valueThree;
                break;
            }
            case 3:
            {
                valueThree = valueOne * valueTwo;
                cout << "Умножение чисел = " << valueThree;
                break;
            }
            case 4:
            {
                if (valueTwo == 0)
                {
                    cout << "На ноль делить нельзя.";
                    break;
                }
                else
                {
                    
                    valueThree = valueOne / valueTwo;
                    cout << "Деление чисел = " << valueThree;
                    break;
                }
                
            }
            case 5:
            {
                valueThree = sqrt(valueOne);
                cout << "Корень числа = " << valueThree;
                break;
            }
            case 6:
            {
                cout << "Введите степень числа: ";
                cin >> stepen;
                for (int i = 1, result = valueOne; i <= stepen; result *= valueOne, i++)
                {
                    valueTwo = result;
                }
                cout << "Степень числа = " << valueTwo;
                break;
            }
            case 7:
            {
                for (int i = 2, result = 1; i <= valueOne + 1; result *= i, i++)
                {
                    valueTwo = result;
                }
                cout << "Факториал числа = " << valueTwo;
                break;
            }
            case 8:
            {
                double res = valueOne / 100;
                cout << res;
                break;
            }
            default: {
                cout << "Нет такого действия. Попробуйте еще раз.";
            }
            }
            cout << "\n";
        }
}
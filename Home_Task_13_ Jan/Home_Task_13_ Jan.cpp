﻿//1. Написать программу, выводящую на экран только чётные целые числа из диапазона от 1 до 100.

//#include <iostream>
//using namespace std;
//int main()
//{
//	int x = 1;
//	while (x <= 50)
//	{
//		cout << 2*x++ << "\n";
//	}
//}

//2. Вычислить сумму чисел в диапазоне от M до N.

//#include <iostream>
//using namespace std;
//int main()
//{
//	int M;
//	int N;
//	int SUM = 0;
//	cout << "Enter first number M and second number N of array - "; 
//	cin >> M >> N;
//	if (M > N)
//	{
//		cout << "Wrong Wrong";
//		return 0;
//	}
//	while (M <= N)
//	{
//		SUM += M++;
//		cout << SUM << "\n";
//	}
//	cout << "Final count = " << SUM << "\n";
//}

//3. Программа печатает таблицу соответствия температур по Цельсию и Фаренгейту  в указанном диапазоне.

//#include <iostream>
//using namespace std;
//int main()
//{
//	double CelcLow, CelcHigh, Fahr, FC, CF;
//    cout << "Let's input Celcius degrees - ";
//    cin >> CelcLow >> CelcHigh;
//    if (CelcLow > CelcHigh)
//    {
//        cout << "Wrong entry";
//        return 0;
//    }
//    Fahr = CelcLow * 9 / 5 + 32;
//    while (CelcLow <= CelcHigh )
//    {
//        Fahr = CelcLow * 9 / 5 + 32;
//        cout << CelcLow << " Celcius   " << Fahr << " Fahr\n";
//        CelcLow++;
//    }
    /*cout << Fahr << " Fahrengeits!\n";
    cout << "Bonus. Enter Fahrengeits - ";
    cin >> FC;
    CF = (FC - 32) * 5 / 9;
    cout << CF << " Celcius\n";*/
//}

//4. Написать программу, вычисляющую факториал введённого числа.

//#include <iostream>
//using namespace std;
//int main()
//{
//    int x;
//    cin >> x;
//    int fac = 1;
//    cout << "Factorial !(" << x;
//    while (x >= 1)
//    {
//        fac *= x--;
//    }
//    cout << ") = " << fac;
//}

//5. С клавиатуры вводится целое число любой разрядности.Определить количество цифр в нём и их сумму

//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "Enter number";
//    int number;
//    cin >> number;
//    int rem;
//    int sum = 0;
//    int exp = 1;
//    while (pow(10, exp) < abs(number))
//    {
//        exp++;
//    }
//    cout << number << " = Number\n";
//    cout << exp << " = Razryads\n";
//    while (exp >= 1)
//    {
//        rem = number % 10;
//        //cout << rem;
//        sum = sum + rem;
//        number = number / 10;
//        exp--;
//    }
//    cout << "\n" << sum << " Sum of digets\n"; 
//}

//6. С клавиатуры вводится целое число любой разрядности.Необходимо перевернуть это число, т.е.цифры должны располагаться в обратном порядке(например, вводим число 1234 – в результате будет 4321).

//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "Enter number - ";
//    int number = 0;
//    int rem;
//    cin >> number;
//    while (number > 0)
//    {
//        rem = number % 10;
//        cout << rem;
//        number = number / 10;
//    }
//}

//7. С клавиатуры вводится целое число.Вывести на экран все числа, на которые введённое число делится без остатка.Например, для 60 такими числами станут 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.

//#include <iostream>
//using namespace std;;
//int main()
//{
//    cout << "Enter number";
//    int number;
//    cin >> number;
//    int div = 1;
//    while (div < number)
//    {
//        (number % div == 0) ? cout << div << ", " : cout << "";
//        div++;
//    }
//    cout << div << ".";
//}

//8. С клавиатуры вводится целое число.Определить, является ли оно простым.Простое число делится без остатка только на 1 и само на себя.

//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "Enter number\n";
//    int number;
//    cin >> number;
//    int div=2;
//    while (div < number)
//    {
//        if (number % div == 0)
//        {
//            cout << "ordinary ";
//            return 0;
//            }
//        div++;
//    }
//    cout << "Simple number\n";
//}

//9. Проверить, есть ли во введённом числе одинаковые цифры подряд.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number\n";
    int number;
    cin >> number;
    while (abs(number)>0)
    {
        if (number % 10 == number / 10 % 10)
        {
            cout << number % 10 << number / 10 % 10 << " same numbers\n";
        }
        number = number / 10; 
    }
    cout << "\n";
}

#include <iostream>

using namespace std;

// Funksiyalar

//================================================

double Kub_Num(double num_1)
{
    return num_1 * num_1 * num_1;
}

//================================================

double Big_Num(double num_1, double num_2)
{
    if (num_1 > num_2)
    {
        return num_1;
    }
    else if (num_1 < num_2)
    {
        return num_2;
    }
    else
    {
        return num_1;
    }
}

//================================================

double Pos_Neg(double num_1)
{
    if (num_1 < 0)
    {
        return false;
    }
    else if (num_1 > 0)
    {
        return true;
    }
    else if (num_1 == 0)
    {
        return true;
    }
}

//================================================

double topla(double num_1,double num_2)
{
    return num_1 + num_2;
}

double cixma(double num_1,double num_2)
{
    return num_1 - num_2;
}

double vurma(double num_1,double num_2)
{
    return num_1 * num_2;
}

double bolme(double num_1, double num_2)
{
    return num_1 / num_2;
}

double Calcul(double num_1, double num_2, char choose_1)
{
    if (choose_1 == '+')
    {
        return topla(num_1,num_2);
    }
    
    else if (choose_1 == '-')
    {
        return cixma(num_1,num_2);
    }

    else if (choose_1 == '*')
    {
        return vurma(num_1,num_2);
    }

    else if (choose_1 == '/')
    {
        return bolme(num_1,num_2);
    }
}

//================================================

int sade_eded(int num_1)
{
    if (num_1 % 2 != 0)
    {
        return false;
    }
    if (num_1 == 2)
    {
        return false;
    }
    else if (num_1 % 3 == 0 || num_1 % 5 == 0 || num_1 % 7 == 0)
    {
        return true;
    }
}

//================================================

int Ust_quvvet(int num_1, int num_2)
{
    int total = 1;
    for (int i = 0; i < num_1; i++) {
        total *= num_2;
    }
    return total;
}

//================================================


int factorial(int num_1)
{
    if (num_1 <= 1)
    {
        return 1;
    }
    else
    {
        return num_1 * factorial(num_1 - 1);
    }
}

//================================================

double between(double num_1, double num_2)
{
    double total_nine = 0;

    double start_num = min(num_1, num_2);
    double finish_num = max(num_1, num_2);

    for (int i = start_num; i <= finish_num; i++) {
        total_nine += i;
    }

    return total_nine;
}

//================================================

int massiv_big_num(int num_1)
{
    int min_num = 0;
    int max__num = 10;
    int array[5] = {};
    for (int i = 0; i < 5; i++)
    {
        array[i] = rand() % (max__num - min_num + 1) + min_num;

    }

    int big_num = array[0];

    for (int i = 0; i < 5; i++)
    {
        if (max__num < array[i])
        {
            max__num = array[i];
        }
    }

    return big_num;
}

//================================================

int main()
{
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    double num_one;

    cout << "Enter number : ";
    cin >> num_one;

    double answer_one = Kub_Num(num_one);
    cout << "\n\n";
    cout << "Answer : " << answer_one;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    double num_two_;
    double num_two;

    cout << "Enter num one : ";
    cin >> num_two_;

    cout << "Enter num two : ";
    cin >> num_two;

    double answer_two = Big_Num(num_two, num_two_);
    cout << "\n\n";
    cout << "Big Num : " << answer_two;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    double num_three;

    cout << "Enter number : ";
    cin >> num_three;

    double answer_three = Pos_Neg(num_three);
    cout << "\n\n";
    cout << "Answer : " << answer_three;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    double num_four_;
    double num_four;
    char choose_four;

    cout << "Enter number one : ";
    cin >> num_four_;

    cout << "Enter number two : ";
    cin >> num_four;

    cout << "Enter choose :";
    cin >> choose_four;

    double answer_four = Calcul(num_four_, num_four, choose_four);
    cout << "\n\n";
    cout << "Number one : " << num_four_ << endl;
    cout << "Number two : " << num_four << endl;
    cout << "Opperator : " << choose_four << endl;
    cout << "Answer : " << answer_four << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    int num_six;

    cout << "Enter number : ";
    cin >> num_six;

    int answer_six = sade_eded(num_six);
    cout << "\n\n";
    cout << "Answer : " << answer_six;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";

    int num_seven;

    cout << "Enter number : ";
    cin >> num_seven;

    int answer_seven = factorial(num_seven);
    cout << "\n\n";
    cout << "Answer : " << answer_seven;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";

    int ust;
    int quvvet;

    cout << "Ustu daxil edin :";
    cin >> ust;

    cout << "Quvveti daxil edin : ";
    cin >> quvvet;

    int answer_eight = Ust_quvvet(ust, quvvet);
    cout << "\n\n";
    cout << "Answer : " << answer_eight;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 9";
    cout << "\n\n\n\n";

    double num_nine;
    double num_nine_;

    cout << "Enter number one : ";
    cin >> num_nine;

    cout << "Enter number two : ";
    cin >> num_nine_;

    double answer_nine = between(num_nine,num_nine_);
    cout << "\n\n";
    cout << "Answer : " << answer_nine;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
    cout << "\n\n";
    cout << "Tap - 10";
    cout << "\n\n\n\n";


    int num_ten = 0;
    int answer_ten = massiv_big_num(num_ten);
    cout << "\n\n";
    cout << "Big num : " << answer_ten;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "============================";
}
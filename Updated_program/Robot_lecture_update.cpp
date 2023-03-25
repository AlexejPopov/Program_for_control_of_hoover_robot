#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "--------------------------------------------------------Программа для управления роботом!--------------------------------------------------------" << endl;

    int Command = 0;
    enum Commands { Go = 11, Back = 22, Right_45 = 10, Right_90 = 20, Left_45 = 01, Left_90 = 02, Stop = 00 };
    char Direction = ' ';

    do
    {
        cout << R"(Введите первоначальное положение робота:
N(n) - Север
D(d) - Северо-восток
E(e) - Восток
H(h) - Юго-восток
S(s) - Юг
Q(q) - Юго-запад
W(w) - Запад
X(x) - Северо-запад
)";
        cin >> Direction;

        system("cls");
        if (Direction == 'N' || Direction == 'n' || Direction == 'E' || Direction == 'e' || Direction == 'S' || Direction == 's' || Direction == 'W' || Direction == 'w'
        || Direction == 'D' || Direction == 'd' || Direction == 'H' || Direction == 'h' || Direction == 'Q' || Direction == 'q' || Direction == 'X' || Direction == 'x')
            break;
        else cout << "Введено неверное направление! Повторите ввод!" << endl;
    } while (true); 

    do
    {
        system("cls");
        cout << R"(
Робот готов и ожидает команду:
11 - движение вперед
22 - повернуть назад
10 - повернуть на 45 градусов направо
20 - повернуть на 90 градусов направо
01 - повернуть на 45 градусов налево
02 - повернуть на 90 градусов налево
00 - остановиться
)";
        cin >> Command;

        switch (Direction)
        {
        case 'N':
        case 'n':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед на Север!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад на Юг!" << endl;
                Direction = 'S';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Северо-восток!" << endl;
                Direction = 'D';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Восток!" << endl;
                Direction = 'E';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Северо-запад!" << endl;
                Direction = 'X';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Запад!" << endl;
                Direction = 'W';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Север!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'D':
        case 'd':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед на Северо-восток!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад на Юго-запад!" << endl;
                Direction = 'Q';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Восток!" << endl;
                Direction = 'E';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Юго-восток!" << endl;
                Direction = 'H';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Север!" << endl;
                Direction = 'N';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Северо-запад!" << endl;
                Direction = 'X';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Северо-восток!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'E':
        case 'e':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед на Восток!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад на Запад!" << endl;
                Direction = 'W';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Юго-восток!" << endl;
                Direction = 'H';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Юг!" << endl;
                Direction = 'S';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Северо-восток!" << endl;
                Direction = 'D';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Север!" << endl;
                Direction = 'N';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Восток!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'H':
        case 'h':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед на Юго-восток!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад на Северо-запад!" << endl;
                Direction = 'X';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Юг!" << endl;
                Direction = 'S';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Юго-запад!" << endl;
                Direction = 'Q';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Восток!" << endl;
                Direction = 'E';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Северо-восток!" << endl;
                Direction = 'D';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Юго-восток!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'S':
        case 's':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед - на Юг!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад - на Север!" << endl;
                Direction = 'N';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Юго-запад!" << endl;
                Direction = 'Q';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Запад!" << endl;
                Direction = 'W';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Юго-восток!" << endl;
                Direction = 'H';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Восток!" << endl;
                Direction = 'E';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Юг!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'Q':
        case 'q':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед - на Юго-запад!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад - на Северо-восток!" << endl;
                Direction = 'D';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Запад!" << endl;
                Direction = 'W';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Северо-запад!" << endl;
                Direction = 'X';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Юг!" << endl;
                Direction = 'S';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Юго-восток!" << endl;
                Direction = 'H';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Юго-запад!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'W':
        case 'w':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед - на Запад!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад - на Восток!" << endl;
                Direction = 'E';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Северо-запад!" << endl;
                Direction = 'X';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Север!" << endl;
                Direction = 'N';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Юго-запад!" << endl;
                Direction = 'Q';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Юг!" << endl;
                Direction = 'S';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Запад!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;

        case 'X':
        case 'x':
            switch (Command)
            {
            case Commands::Go:
                cout << "Робот поедет вперед - на Север-запад!" << endl;
                break;
            case Commands::Back:
                cout << "Робот повернет назад - на Юго-восток!" << endl;
                Direction = 'H';
                break;
            case Commands::Right_45:
                cout << "Робот повернет на Север!" << endl;
                Direction = 'N';
                break;
            case Commands::Right_90:
                cout << "Робот повернет на Северо-восток!" << endl;
                Direction = 'D';
                break;
            case Commands::Left_45:
                cout << "Робот повернет на Запад!" << endl;
                Direction = 'W';
                break;
            case Commands::Left_90:
                cout << "Робот повернет на Юго-запад!" << endl;
                Direction = 'Q';
                break;
            case Commands::Stop:
                cout << "Робот остановится и смотрит на Северо-запад!" << endl;
                break;
            default:
                cout << "Некорректная команда!" << endl;
                break;
            }
            break;
        }
        if (Command == Commands::Stop)
        {
            cout << "Для продолжения работы робота введите 11, для выключения робота введите 00: " << endl;
            cin >> Command;
        }
        Sleep(2000);
    } while (Command != Commands::Stop);
    cout << "Выключение робота!" << endl;
    Sleep(1500);
}
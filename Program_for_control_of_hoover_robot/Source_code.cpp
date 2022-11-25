#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>        // ���������� ����������� �� Windows

using namespace std;

/* � ��� ���� 4 �������� ������ ��������: ������, �������, ������, ����. ����� ��������������� ����������. � � ����������� �� ���� ��� ���� ������������ ����� ��������
���������� �������. ������������� ������������ �������������� ������ switch. �.�. � ��� ������� ����� �����, ��� �������� switch. ��� ��� ����������� ������� ����� �
����������� �������� ������. ����� ��� ����� ������ ��������� ����������� � ������� �������� ����� ������������. ���� do while ��� ��������! �� ����� ���������� ������-
������ ������� ������ ���� ��� �� ������ ���������� ��������. ���� ����� ������������ ����������� ���� �����������, ����� ��������. �� ������ ��������� ��� �������. �
����� ������������ ������ ��� ���������� ��������, ������ �� ����� ������������ �����.

�.�. � ��� 4 �������, �� ����� switch. �� ������������ �������� ������ ����� �������� � ����� switch. � ����������� �� ����, ����� � ��� �������������� ��������� ������,
��� ������ ����� � ��� �� ������� ����� ������ ��������� �������� ������. ��� � ��� ��� ������ char � int, � � ���� switch case ��������. � ��� ����� switch case ������
�������� ����� ���� switch case. �� ����� ���������� ���� � ����� ����� �����������.
������ ��������� ��� ������� ��������� ������ � ����������� switch. ������� �� �������� �����������, � ����� �������� ��������, ������� ����� �������.

�� �������� ������������ � ����� �����������, �� �� ������ ������. ����� ��� ����� ������� �����������, ���������� �������� ���������� Direction, ������� ��������� � ��-
������ ��� ������� ���������. ����� ���������� ������� ���������, � ����� ������. ����� ������� ��������� ������ ��������, Direction ����� ��������. ��� ���������� ��-
����� ��������� ������. �.�. ����� �� ���� ������� �������, �� �� ������ ������� �� ����� ��� ����� �������� �� ������, �� � ������ ��� �������� ��������������. �����
�� ������ ��� ������������ �������� �� �����, �� � �������� ������ ��� ������������.

���������� ��� ������� ���������� ������. ���� ������������ ��� ���� �������, �� �������� ������������� ��� ���������� ������, ���� ��� ������� ���� ����� �����������
��� ������ ������������. � ��� ���� ��� ����������, ����������� (Direction) � ������� (Command). ���������� ����������� (Direction) �� �� ����� ������ ����� ���� ���
���� ��� ��� �� �����, � ������� ����� ������ �������. ���� � ��� ����� ������� ���� ����� ���������, �� ��������� � ������� �������� � ���������� (� ����� while). */

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "--------------------------------------------------------��������� ��� ���������� �������!--------------------------------------------------------" << endl;

    int Command = 0;                                                                // �������, �������� � ����������, ���������� ��� switch
    enum Commands { Go = 11, Right = 10, Left = 01, Stop = 00 };
    char Direction = '+';                                                           // ����������� �������� ������

    do                                                                              // ���� ����� ���������� ��������� ������
    {
        cout << R"(������� �������������� ��������� ������:
N(n) - �����
E(e) - ������
S(s) - ��
W(w) - �����
)";
        cin >> Direction;

        system("cls");
        if (Direction == 'N' || Direction == 'n' || Direction == 'E' || Direction == 'e' || Direction == 'S' || Direction == 's' || Direction == 'W' || Direction == 'w')
            break;
        else cout << "������� �������� �����������! ��������� ����!" << endl;
    } while (true);                                                                 // ����������� ����, ����� �� �������� ���������� ����� ������������ ������ �������-
                                                                                    // ��� ������

    do                                                                              // ���� �������� ������
    {
        system("cls");                                                              // ����� �� ������ ������� ��������. ����� ����� ��� ����� �������� ������������ ��-
                                                                                    // ��� � ���� ����� ������
        cout << R"(
����� ����� � ������� �������:
11 - ��������� ������
10 - ��������� �������
01 - ��������� ������
00 - ������������
)";                                                                                 // ����� ����������� ���� ������� � ������������
        cin >> Command;

        switch (Direction)                                                          // ����� �������� (����������) ��������� ������
        {
        case 'N':                                                                   // ���� ������� ����������� ����� 
        case 'n':
            switch (Command)                                                        // ����� �������, ������� ���� ������������
            {
            case Commands::Go:                                                      // case Go: ��� case 11:
                cout << "����� ������ ������ - �� �����!" << endl;
                break;
            case Commands::Right:
                cout << "����� �������� �� ������!" << endl;
                Direction = 'E';                                                    // ����� ����������� ������
                break;
            case Commands::Left:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'W';                                                    // ����� ����������� ������
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� �����!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'S':                                                                   // ���� ������� ����������� �� 
        case 's':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� ��!" << endl;
                break;
            case Commands::Right:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'W';
                break;
            case Commands::Left:
                cout << "����� �������� �� ������!" << endl;
                Direction = 'E';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� ��!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'W':                                                                   // ���� ������� ����������� ����� 
        case 'w':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� �����!" << endl;
                break;
            case Commands::Right:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'N';
                break;
            case Commands::Left:
                cout << "����� �������� �� ��!" << endl;
                Direction = 'S';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� �����!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'E':                                                                   // ���� ������� ����������� ������
        case 'e':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� ������!" << endl;
                break;
            case Commands::Right:
                cout << "����� �������� �� ��!" << endl;
                Direction = 'S';
                break;
            case Commands::Left:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'N';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� ������!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;
        }
        if (Command == Commands::Stop)                                              // ������ ������������� �� ���������� ������
        {
            cout << "��� ����������� ������ ������ ������� 11, ��� ���������� ������ ������� 00: " << endl;
            cin >> Command;
        }
        Sleep(2000);
    } while (Command != Commands::Stop);                                            // ���� ����� ��� � while (Command!=Stop); ��� while (Command!=0);
    cout << "���������� ������!" << endl;
    Sleep(1500);
}

/* ���������� ��� ���� ��������� ������:

1. ����� �� ����� ������ ���������� ����������.
2. ����� �� �� ����� ������ ���������� ����������, �� �� ����� ������� ����� ���� ������ �����������, ���� ����� ������� ����� ���� ������ �����������. ��� ��� ������
(����� ���� ������ �����������). �������� ��� ����������� ����. � ������, ���� �� ������ ������, ������� ��� �� ����������, ��������� �������� ��� ������ ��� ������ �
��� ����� � ����� �� ��� ���, ���� �� �� ������ ������ ���������� ������. while (true) ������ ������ � ������ ����� �����������.

����������� ���� ������������� ������������ ���� �����, ����� ������ �������������� ������� � ����� ����� (� ������� ��� �������).

������ ����� ���� ������� ���������� ������. �.�. �� ����� ������� ������ ������������, �� ����� ���������� ��� ������� � ������� ����� (� ������� ������ �����). ����-
��� ���� do while, �.�. ��, �� ������� ����, ����� ��� ���� �������.

������� Sleep (����� � ���������� windows) � ��������� �������� ��������� � ������������. */
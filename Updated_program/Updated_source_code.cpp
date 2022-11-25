#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "--------------------------------------------------------��������� ��� ���������� �������!--------------------------------------------------------" << endl;

    int Command = 0;
    enum Commands { Go = 11, Back = 22, Right_45 = 10, Right_90 = 20, Left_45 = 01, Left_90 = 02, Stop = 00 };
    char Direction = ' ';

    do
    {
        cout << R"(������� �������������� ��������� ������:
N(n) - �����
D(d) - ������-������
E(e) - ������
H(h) - ���-������
S(s) - ��
Q(q) - ���-�����
W(w) - �����
X(x) - ������-�����
)";
        cin >> Direction;

        system("cls");
        if (Direction == 'N' || Direction == 'n' || Direction == 'E' || Direction == 'e' || Direction == 'S' || Direction == 's' || Direction == 'W' || Direction == 'w'
        || Direction == 'D' || Direction == 'd' || Direction == 'H' || Direction == 'h' || Direction == 'Q' || Direction == 'q' || Direction == 'X' || Direction == 'x')
            break;
        else cout << "������� �������� �����������! ��������� ����!" << endl;
    } while (true); 

    do
    {
        system("cls");
        cout << R"(
����� ����� � ������� �������:
11 - �������� ������
22 - ��������� �����
10 - ��������� �� 45 �������� �������
20 - ��������� �� 90 �������� �������
01 - ��������� �� 45 �������� ������
02 - ��������� �� 90 �������� ������
00 - ������������
)";
        cin >> Command;

        switch (Direction)
        {
        case 'N':
        case 'n':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ �� �����!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� �� ��!" << endl;
                Direction = 'S';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� ������-������!" << endl;
                Direction = 'D';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� ������!" << endl;
                Direction = 'E';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� ������-�����!" << endl;
                Direction = 'X';
                break;
            case Commands::Left_90:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'W';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� �����!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'D':
        case 'd':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ �� ������-������!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� �� ���-�����!" << endl;
                Direction = 'Q';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� ������!" << endl;
                Direction = 'E';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� ���-������!" << endl;
                Direction = 'H';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'N';
                break;
            case Commands::Left_90:
                cout << "����� �������� �� ������-�����!" << endl;
                Direction = 'X';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� ������-������!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'E':
        case 'e':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ �� ������!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� �� �����!" << endl;
                Direction = 'W';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� ���-������!" << endl;
                Direction = 'H';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� ��!" << endl;
                Direction = 'S';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� ������-������!" << endl;
                Direction = 'D';
                break;
            case Commands::Left_90:
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

        case 'H':
        case 'h':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ �� ���-������!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� �� ������-�����!" << endl;
                Direction = 'X';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� ��!" << endl;
                Direction = 'S';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� ���-�����!" << endl;
                Direction = 'Q';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� ������!" << endl;
                Direction = 'E';
                break;
            case Commands::Left_90:
                cout << "����� �������� �� ������-������!" << endl;
                Direction = 'D';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� ���-������!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'S':
        case 's':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� ��!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� - �� �����!" << endl;
                Direction = 'N';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� ���-�����!" << endl;
                Direction = 'Q';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'W';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� ���-������!" << endl;
                Direction = 'H';
                break;
            case Commands::Left_90:
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

        case 'Q':
        case 'q':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� ���-�����!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� - �� ������-������!" << endl;
                Direction = 'D';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'W';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� ������-�����!" << endl;
                Direction = 'X';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� ��!" << endl;
                Direction = 'S';
                break;
            case Commands::Left_90:
                cout << "����� �������� �� ���-������!" << endl;
                Direction = 'H';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� ���-�����!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;

        case 'W':
        case 'w':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� �����!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� - �� ������!" << endl;
                Direction = 'E';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� ������-�����!" << endl;
                Direction = 'X';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'N';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� ���-�����!" << endl;
                Direction = 'Q';
                break;
            case Commands::Left_90:
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

        case 'X':
        case 'x':
            switch (Command)
            {
            case Commands::Go:
                cout << "����� ������ ������ - �� �����-�����!" << endl;
                break;
            case Commands::Back:
                cout << "����� �������� ����� - �� ���-������!" << endl;
                Direction = 'H';
                break;
            case Commands::Right_45:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'N';
                break;
            case Commands::Right_90:
                cout << "����� �������� �� ������-������!" << endl;
                Direction = 'D';
                break;
            case Commands::Left_45:
                cout << "����� �������� �� �����!" << endl;
                Direction = 'W';
                break;
            case Commands::Left_90:
                cout << "����� �������� �� ���-�����!" << endl;
                Direction = 'Q';
                break;
            case Commands::Stop:
                cout << "����� ����������� � ������� �� ������-�����!" << endl;
                break;
            default:
                cout << "������������ �������!" << endl;
                break;
            }
            break;
        }
        if (Command == Commands::Stop)
        {
            cout << "��� ����������� ������ ������ ������� 11, ��� ���������� ������ ������� 00: " << endl;
            cin >> Command;
        }
        Sleep(2000);
    } while (Command != Commands::Stop);
    cout << "���������� ������!" << endl;
    Sleep(1500);
}
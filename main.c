/* ������. �������� ���������, ������� ������� � ���������
����������� �� 99 �� 0 ����� 3 � ������� ������ �����. ����
������� ����� ������ 5, �� ��������� ����� ������� ���������
"Found one!".*/

#include <stdio.h>
int main (void)

// Русский текст
// ��� 1. ������� ��� ����� �� 99 �� 0.

//{
//    for (int i = 99; i >= 0; i--) {
//        printf("%d\n", i);
//    }
//    return 0;
//}

// ��� 2. ������� ��� ����� �� 99 �� 0 ����� 3.

//{
//    for (int i = 99; i >= 0; i--) {
//        if (i % 3 == 0)
//        printf("%d\n", i);
//    }
//
//    return 0;
//}

// ��� 3. ������� ��� ����� �� 99 �� 0 ����� 3. �������� �����, ������� 5.

{
    for (int i = 99; i >= 0; i--) {
        if (i % 3 == 0) {
            printf("%d\n", i);
            if (i % 5 == 0) {
                printf("Found one!\n");
            }
        }
//        if (i % 5 == 0) {
//            printf("Found one!\n");
//        }
    }
    return 0;
}

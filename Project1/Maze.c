#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[9][9] = {
        {2,2,2,2,2,2,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,0,2,2,0,2,2,0,2},
             {2,0,2,0,0,2,0,0,2},
             {2,0,2,0,2,0,2,0,2},
             {2,0,0,0,0,0,2,0,2},
             {2,2,0,2,2,0,2,2,2},
             {2,0,0,0,0,0,0,0,2},
             {2,2,2,2,2,2,2,2,2}
};
int Si, Sj, Ei, Ej;
int success, top, path_i[100], path_j[100];
//����Լ��� �ý��� ����
//S:start,����� E:End,������, top ��� �迭 �ε���
//Path_i, Path_j: ������ ��, �� ��� ���� ������(i�� ��, j�� ��)
void printPath();
int visit(int i , int j);
int main() {
    top = 0;
    success = 0;
    printf("=======�̷� Ž�� ��� ã��=======\n");

    Si = 1; Sj = 1; Ei = 7; Ej = 7;

    if (visit(Si, Sj) == 0)printf("�̷��� �ⱸ�� ã�� �� ����");
    else printf("��� �̷��� �ⱸ�� ã��");
}
void printPath() {//�̷ο��� ã�� ���� ����ϴ� �Լ�
    for (int i = 0; i < top; i++) {
        printf(" [%d][%d] ", path_i[i], path_j[i]);
    }
    printf("\n");
}
int visit(int i, int j) {
    static int pathcount = 1;//ã�� ����� ���� ī��Ʈ
    m[i][j] = 1;//������ �濡 1�� ����, ������ �� �ִ� ���� 0�� �����
    path_i[top] = i;
    path_j[top++] = j;
    //���� �������� �������� ��,
    if (i == Ei && j == Ej) {
        success = 1;
        printf("ã�� ��� %d��\n", pathcount++);
        printPath();
    }
    //�̷� Ž�� �ڵ�
    if (m[i][j + 1] == 0) {
        visit(i, j+1);
    }
    if (m[i+1][j] == 0) {
        visit(i+1, j);
    }
    if (m[i][j - 1] == 0) {
        visit(i, j - 1);
    }
    if (m[i-1][j] == 0) {
        visit(i-1, j);
    }
    top--;
    m[i][j] = 0;
    return success;
}
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
//재귀함수는 시스템 스택
//S:start,출발점 E:End,도착점, top 경로 배열 인덱스
//Path_i, Path_j: 지나간 길, 즉 행과 열을 저장함(i는 행, j는 열)
void printPath();
int visit(int i , int j);
int main() {
    top = 0;
    success = 0;
    printf("=======미로 탐색 경로 찾기=======\n");

    Si = 1; Sj = 1; Ei = 7; Ej = 7;

    if (visit(Si, Sj) == 0)printf("미로의 출구를 찾을 수 없음");
    else printf("모든 미로의 출구를 찾음");
}
void printPath() {//미로에서 찾은 길을 출력하는 함수
    for (int i = 0; i < top; i++) {
        printf(" [%d][%d] ", path_i[i], path_j[i]);
    }
    printf("\n");
}
int visit(int i, int j) {
    static int pathcount = 1;//찾은 경로의 수를 카운트
    m[i][j] = 1;//지나갈 길에 1로 세팅, 지나갈 수 있는 길은 0인 경우임
    path_i[top] = i;
    path_j[top++] = j;
    //만약 도착점에 도착했을 때,
    if (i == Ei && j == Ej) {
        success = 1;
        printf("찾은 경로 %d번\n", pathcount++);
        printPath();
    }
    //미로 탐색 코드
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
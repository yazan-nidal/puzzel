#include<stdio.h>

int count(int a[3][3], int i, int j)
{
    int counT = 0;

    int t = i;
    int l = j + 1;

    for (; t < 3; t++) {
        for (; l, l < 3; l++)
            if (a[t][l] && a[i][j] && a[i][j] > a[t][l])counT++;
        l = 0;
    }

    return counT;
}

bool solve(int a[3][3])
{
    int counT = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            counT += count(a, i, j);

    return (counT % 2 == 0);

}

int main()
{
    int a[9];
    for (int i = 0; i < 9; i++)a[i] = 0;

    int p[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &p[i][j]);

            if (!((p[i][j] >= 0) && (p[i][j] <= 8)))
            {
                scanf("%d", &p[i][j]);
                if (!((p[i][j] >= 0) && (p[i][j] <= 8))) return 0;

            }

            if (a[p[i][j]] != 0)
            {
                scanf("%d", &p[i][j]);

                if (!((p[i][j] >= 0) && (p[i][j] <= 8)))
                {
                    scanf("%d", &p[i][j]);
                    if (!((p[i][j] >= 0) && (p[i][j] <= 8))) return 0;

                }
                if (a[p[i][j]] != 0) return 0;
            }

            a[p[i][j]]++;
        }

    }

    if (solve(p))printf("solvable");
    else printf("not solvable");


    return 0;
}
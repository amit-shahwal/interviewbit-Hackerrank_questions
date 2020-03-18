#include <stdio.h>

#include <stdlib.h>


int main() {
        int a[100];
        int d = 0;
        int n1;
        scanf("%d", & n1);
        for (int i = 0; i < n1; i++)
                scanf("%d", & a[i]);
        int sum = 0;
        int i, j;
        int last;
        int b[10000];
        last = a[n1 - 1];
        //printf("%d",len1);
        if (last < 9) {
                a[n1 - 1] = last + 1;

                for (int i = 0; i < n1; i++)
                        printf("%d", a[i]);
                return 0;

        } else {
                for (i = n1 - 1; i >= 0; i--) {
                        if (a[i] == 9)
                                a[i] = 0;
                        else {

                                a[i] = a[i] + 1;
                                break;
                        }

                }
                for (i = 0, j = 0; i < n1; i++) {

                        if (a[i] == 0) {

                                d++;
                                continue;
                        } else {
                                b[j] = a[i];
                                j++;

                        }

                }

                for (int i = 0; i <= n1 - d; i++)
                        printf("%d", b[i]);
                return 0;

        }

}

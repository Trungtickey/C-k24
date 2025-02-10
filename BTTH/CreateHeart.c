#include <stdio.h>

void printHeart() {
    char heart[11][20] = {
            "   ***     ***   ",
            "  *****   *****  ",
            " ******* ******* ",
            " ****************",
            "  ************** ",
            "   ************  ",
            "    **********   ",
            "     *******     ",
            "      *****      ",
            "       ***       ",
            "        *        "
    };

    for (int i = 0; i < 11; i++) {
        if (i == 5) {
            printf("    Thao KUTE    \n");
        } else {
            printf("%s\n", heart[i]);
        }
    }
}

int main() {
    printHeart();
    return 0;
}

#include <stdio.h>

#define PI 3.14

enum WeekDay {Monday, Tuesday, Wednesday, Thursday, Friday};
// enum WeekDay {Monday = 5, Tuesday = 7, Wednesday, Thursday, Friday};

int main() {
    printf("Take pi as %.2f\n", PI);

    printf("%d %d %d %d %d\n", Monday, Tuesday, Wednesday, Thursday, Friday);

    enum WeekDay lab_day;
    printf("When do you wanna hang out?\n1-) Monday\n2-) Tuesday\n3-) Wednesday\n4-) Thursday\n5-) Friday\n");
    scanf("%d", &lab_day);

    lab_day--;

    if(lab_day == Wednesday) {
        printf("I have lab on Wednesday.\n");
    } else if(lab_day >= Monday && lab_day <= Friday) {
        printf("Sure.\n");
    } else {
        printf("Invalid day.\n");
    }

    return 0;
}
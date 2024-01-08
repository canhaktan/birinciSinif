#include <stdio.h>


void printPolynomial(double coefficients[], int degrees[],int z){
    while (z==1) {
        printf("coefficient[1] = {%.2lf,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}\n", coefficients[0]);
        printf("degree[1] = {%d,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}\n", degrees[0]);
        if (degrees[0] != 1) {
            printf("polynom[1] = {%.2lfx^%d}", coefficients[0], degrees[0]);
        } else if (degrees[0] == 0) {
            printf("polynom[1] = {%.2lf}", coefficients[0]);
        } else if (degrees[0] == 1) {
            printf("polynom[1] = {%.2lfx}", coefficients[0]);
        } else if (coefficients[0] == 0) {
            printf("polynom[1] = {0}");
        } else {
            printf("polynom[1] = {%.2lfx^%d}", coefficients[0], degrees[0]);
        }
        break;
    }
        if (z!=1) {
            for (int i = 0; i < z; i++) {
                if (i == 0) {
                    printf("coefficient[%d] = {%.2lf,", z, coefficients[i]);
                } else if (i >= 1) {
                    printf("%.2lf,", coefficients[i]);
                }
            }
            for (int i = z; i < 20; i++) {
                if (i == 19) {
                    printf("%.2lf}", coefficients[i]);
                    break;
                }
                printf("%.2lf,", coefficients[i]);
            }

            for (int i = 0; i < z; i++) {
                if (i == 0) {
                    printf("\ndegree[%d] = {%d,", z, degrees[i]);
                } else if (i != z - 1) {
                    printf("%d,", degrees[i]);
                }
            }
            for (int i = z; i < 20; i++) {
                if (i == 19) {
                    printf("%d}", degrees[i]);
                    break;
                }
                printf("%d,", degrees[i]);
            }
            for (int i = 0; i < z; i++) {

                if (i == 0 && degrees[i] != 0 && degrees[i] != 1 && coefficients[i] > 0) {
                    printf("\npolynom[%d] = {%.2lfx^%d + ", z, coefficients[i], degrees[i]);
                }
                if (i == 0 && degrees[i] == 0) {
                    printf("\npolynom[%d] = {%.2lf + ", z, coefficients[i]);
                }

                if (i == 0 && degrees[i] == 1 && coefficients[i+1] >= 0) {
                    printf("\npolynom[%d] = {%.2lfx + ", z, coefficients[i]);
                }

                if (i != z - 1 && degrees[i] != 0 && degrees[i] != 1 && coefficients[i] > 0) {
                    printf("%.2lfx^%d + ", coefficients[i], degrees[i]);
                }
                if (i != 0 && i != z - 1 && degrees[i] == 1 && coefficients[i + 1] > 0) {
                    printf("%.2lfx + ", coefficients[i]);
                }

                if (i == z - 1 && degrees[i] != 0 && degrees[i] != 1 && coefficients[i] > 0) {
                    printf("%.2lfx^%d}", coefficients[i], degrees[i]);
                }
                if (i == z - 1 && degrees[i] == 1 && coefficients[i] > 0) {
                    printf("%.2lfx}", coefficients[i]);
                }
                if (i == z - 1 && degrees[i] == 0) {
                    printf("%.2lfx}\n\n", coefficients[i]);
                }
            }
        }
}
void addPolynomials(double c1[], int d1[], double c2[], int d2[], double c3[], int d3[],int sayz,int sayz2){

    for (int i = 0; i < sayz; ++i) {
        for (int j = 0; j < sayz2; ++j) {
            if (d1[i] == d2[j]) {
                c3[i] = c1 [i] + c2[j];
            }
            else {
                break;
            }
        }
    }
    int temp,temp1;
    for (int i = 0; i < sayz-1; i++) {
        for (int j = i; j < sayz2-1; j++) {
            if (d3[i] > d3[j]) {
                temp = d3[i];
                temp1 = c3[i];
                d3[i] = d3[j];
                c3[i] = c3[j];
                d3[j] = temp;
                c3[j] = temp1;
            }
        }
    }
    printPolynomial(c3,d3,sayz);
}

void bubbleSort (double coefficient[],int degree[],int size1) {
    int temp,temp1;
    for (int i = 0; i < size1-1; i++) {
        for (int j = i; j < size1-1; j++) {
            if (degree[i] > degree[j]) {
                temp = degree[i];
                temp1 = coefficient[i];
                degree[i] = degree [j];
                coefficient[i] = coefficient[j];
                degree [j] = temp;
                coefficient[j] = temp1;
            }
        }
    }
}
void readPolynomial(double coefficients[], int degrees[],int a) {
        for(int i = 0; i < a; i++) {
            printf("\nEnter the values of degree:");
            scanf("%d",&degrees[i]);
            printf("\nEnter the value of coefficient:");
            scanf("%lf",&coefficients[i]);
        }
    bubbleSort(coefficients,degrees,a);
        printPolynomial(coefficients,degrees,a);
}
int main()
{
    int size;
    printf("Enter a size of array?\n");
    scanf("%d", &size);
    while (size > 20 || 0 > size || size == 0) {
        printf("Array size must be positive and it can be maximum 20 or minimum 1");
        scanf("%d",&size);
    }
    double coefficient [20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int degree [20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    readPolynomial(coefficient,degree,size);
    int size2;
    printf("\nEnter a size of 2nd array?\n");
    scanf("%d",&size2);
    while (size2 > 20 || 0 > size2 || size2 == 0) {
        printf("Array size must be positive and it can be maximum 20 or minimum 1");
        scanf("%d",&size2);
    }
    double coefficient2 [20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int degree2 [20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    readPolynomial(coefficient2,degree2,size2);
    double coefficient3 [20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int degree3 [20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    addPolynomials(coefficient,degree,coefficient2,degree2,coefficient3,degree3,size,size2);
    return 0;
}

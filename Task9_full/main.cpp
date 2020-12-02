#include <stdlib.h>
#include <stdio.h>


void problem1(){
     int m, n;
    printf("Введите размерность матрицы\n");
    scanf("%d %d", &m, &n);
    printf("Введите саму матрицу\n");
    int **arr= (int **) malloc(sizeof(int *) * n);
    for(int i = 0; i < m; ++i) {
        arr[i] = (int*) malloc(sizeof(int) * m);
        for(int j = 0; j < n; ++j) scanf("%d", &arr[i][j]);
    }
    int *arr_transformed = (int *) malloc(sizeof(int) * (n * m));

    for(int i = 0; i < m; ++i) for(int j = 0; j < n; ++j) {

        arr_transformed[i * m +  j] = arr[i][j];
    }
    printf("=>\n");
    for(int i = 0; i < m * n; ++i) {
        printf("%d ", arr_transformed[i]);

    }

    int **arr_transformed_inverse = (int **) malloc(sizeof(int *) * n);
    for(int i = 0; i < n; ++i) arr_transformed_inverse[i] = (int *) malloc(sizeof(int) * n);
    for(int i = 0; i < m * n; ++i){
        arr_transformed_inverse[i / m][i % m]= arr_transformed[i];
    }

    printf("\n<=\n");
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", arr_transformed_inverse[i][j]);
        }
        printf("\n");
    }


}




void problem2_1(int n, int m){
    int **arr = (int **) malloc(sizeof(int  *) * n);

    for(int i = 0; i < n; ++i){
        arr[i] = (int *) malloc(sizeof(int) * m);
        for(int j = 0; j < m; ++j){
            arr[i][j] = abs(i - j) + 1;
        }

    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) printf("%d ", arr[i][j]);
        printf("\n");
    }



}



void problem2_2(int n, int m){

    int **arr = (int**) malloc(sizeof(int *) * n);

    int c = 1;
    int k = 0;
    for(int i = 0; i < n; ++i) {
        arr[i] = (int *) malloc(sizeof(int) * m);
        for(int j = 0; j < m; ++j) arr[i][j] = 0;
    }
    while(c < n * m){
        //Заполняем верхнюю часть матрицы
        for(int j =  k; j < m - k - 1; ++j){
            arr[k][j] = c;
            c++;
        }

        //Заполняем правую часть матрицы
        for(int j = k; j < n - k - 1; ++j){
            arr[j][m - k - 1] = c;
            c++;
        }

        //Заполняем нижнюю часть матрицы
        for(int j = m - k - 1; j > k; --j){
            arr[n - k - 1][j] = c;
            c++;
        }

        //Заполняем левую часть матрицы
        for(int j = n - k - 1; j > k; --j){
            arr[j][k] = c;
            c++;
        }
        k++;

    }
    if (n == m && n % 2 != 0) arr[n / 2][m / 2] = c;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j){ printf("%d ", arr[i][j]);}
        printf("\n");

        }

}

void problem2(){
    int n, m;
    printf("Введите размер матрицы\n");
    scanf("%d %d", &n, &m);
    problem2_1(n, m);
    printf("\n");
    problem2_2(n, m);
}


void gauss(double **arr, int n, int m){

    for(int i = 0; i < n; ++i){

        for(int k = i + 1; k < n; ++k){
            double t = arr[k][i] / arr[i][i];
            arr[k][i] =  0;
            for(int l = i + 1; l < m; ++l) arr[k][l] -= t * arr[i][l];
        }

    }

}

void problem5(){
    int n;
    printf("Введите размер матрицы:\n");
    scanf("%d", &n);
    double **arr = (double **) malloc(sizeof(double *) * n);
    printf("Введите саму матрицу\n");
    for(int i = 0; i < n; ++i){
        arr[i] = (double *) malloc(sizeof(double) * n);
        for(int j = 0; j < n; ++j){
            scanf("%lf", &arr[i][j]);
        }

    }

    gauss(arr, n, n);
    for(int i = 0; i < n; ++i){
        double h = arr[i][i];
        for(int j = i; j < n; ++j){
            arr[i][j] /= h;
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) printf("%lf ", arr[i][j]);
        printf("\n");
    }

}


void problem6(){
    int n;
    printf("Введите размер матрицы:\n");
    scanf("%d", &n);
    double **arr = (double **) malloc(sizeof(double *) * n);

    for(int i = 0; i < n; ++i) {
        arr[i] = (double*) malloc(sizeof(double) * 2 * n);
        for(int j = n; j < 2 * n; ++j){
            if (i == j - n) arr[i][j] = 1;
            else arr[i][j] = 0;
        }
    }


    printf("Введите саму матрицу\n");
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            scanf("%lf", &arr[i][j]);
        }

    }

    gauss(arr, n, 2 * n);
        for(int i = 0; i < n; ++i){
        double h = arr[i][i];
        for(int j = i; j < 2 * n; ++j){
            arr[i][j] /= h;
        }
    }


    for(int i = n - 2; i >= 0; --i){
        for(int j = n; j < 2 * n; ++j){
            arr[i][j] -= arr[i + 1][j] * arr[i][i + 1];
        }
    }
    //Вывод
    for(int i = 0; i < n; ++i){
        for(int j = n; j < 2 * n; ++j){
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }


}


void problem7(){
    int n;
    printf("Введите размер матрицы:\n");
    scanf("%d", &n);
    double **arr = (double **) malloc(sizeof(double *) * n);

    printf("Введите саму матрицу\n");
    for(int i = 0; i < n; ++i){
        arr[i] = (double *) malloc(sizeof(double) * n);
        for(int j = 0; j < n; ++j){
            scanf("%lf", &arr[i][j]);
        }

    }

    gauss(arr, n, n);
    double det = 1;

    for(int i = 0; i < n; ++i) det *= arr[i][i];

    printf("Определитель: %lf\n", det);

}






int main(){
    int choose = 1;


    while(choose) {
        printf("Выберите номер задачи:\n");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                problem1();
                break;
            case 2:
                problem2();
                break;

            case 5:
                problem5();
                break;
            case 6:
                problem6();
                break;
            case 7:
                problem7();
                break;
            default:
                break;

        }
    }



    return 0;
}
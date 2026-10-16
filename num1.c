#include <locale.h>
#include <stdio.h>

int n1();
int n2();
int n3();

int main()
{
    setlocale(LC_CTYPE, "RUS");
    n1();
    n2();
    n3();
    return 0;
}


int n1()
{
    printf("1\n2\n3\n");
    printf("1\n \t2\n \t \t3\n");

    printf("%d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
    printf("%10.5f\n", 12.234657);

    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
    printf("Деление %d на %d равно %d\n", 7, 5, 7 / 5);
    printf("Умножение %d на %d равно %d\n", 2000, 4, 2000 * 4);

    printf("%d разделить на %d равно %d\n", 5., 2000000., 5. / 2000000);
    printf("%f разделить на %f равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%g разделить на %g равно %g\n", 5., 2000000., 5. / 2000000);
    printf("%e разделить на %e равно %e\n", 5., 2000000., 5. / 2000000);
    return 0;
}

int n2()
{
    int N, K;
    int cur_min;
    int h_left, m_left;
    int sec_8;
    double day_part, hour_part;

    N = 10;
    K = 33;

    cur_min = N * 60 + K + 1;

    h_left = (1440 - (N * 60 + K)) / 60;
    m_left = (1440 - (N * 60 + K)) % 60;

    sec_8 = (N - 8) * 3600 + K * 60;

    day_part = (double)N / 24.0;
    hour_part = (double)K / 60.0;

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", cur_min);
    printf("До полуночи осталось %d часов и %d минут\n", h_left, m_left);
    printf("С 8.00 прошло %d секунд\n", sec_8);
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n", day_part, hour_part);
    return 0;
}

int n3()
{
    int n, L;
    double res;

    n = 4;
    L = 337;
    res = (double)n / L;

    printf("Дано:\n   %d\n %d\n----\nОтвет:\n%+010.3f\n", n, L, res);
    return 0;
}

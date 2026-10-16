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

    printf("%4d %4d %4d %4d\n", 1, 2, 3, 4);

    printf("%10.5f\n", 12.234657);

    printf("Остаток от деления %d на %d равен %d\n", 7, 5, 7 % 5);
    printf("Умножение %d на %d равно %d\n", 2000, 4, 4 * 2000);

    printf("%d разделить на %d равно %d\n", 5., 2000000., 5. / 2000000);
    printf("%f разделить на %f равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%g разделить на %g равно %g\n", 5., 2000000., 5. / 2000000);
    printf("%e разделить на %e равно %e\n", 5., 2000000., 5. / 2000000);

    return 0;
}

int n2()
{
    int N, K, S;
    int current_sec;
    int sec_in_day;
    int to_midnight_sec;
    int mid_h, mid_m, mid_s;
    int sec_from_8;
    double day_fraction, hour_fraction;

    N = 10;
    K = 33;
    S = 21;
	
    current_sec = N * 3600 + K * 60 + S;
    sec_in_day = 24 * 3600;

    to_midnight_sec = sec_in_day - current_sec;
    mid_h = to_midnight_sec / 3600;
    mid_m = (to_midnight_sec % 3600) / 60;
    mid_s = to_midnight_sec % 60;

    sec_from_8 = current_sec - (8 * 3600);

    day_fraction = N / 24.0;
    hour_fraction = K / 60.0;

    printf("Сейчас %d часов %d минут %d секунд\n", N, K, S);
    printf("Идет %d минута суток\n", N * 60 + K + 1);
    printf("До полуночи осталось %d часов %d минут %d секунд\n", mid_h, mid_m, mid_s);
    printf("С 8.00 прошло %d секунд\n", sec_from_8);
    printf("Текущий час = %2.2f суток и текущая минута = %2.2f часа\n", day_fraction, hour_fraction);
    return 0;
}

int n3()
{
    int n, L;
    double result;

    n = 4;
    L = 337;

    result = (double)n / (double)L;
    printf("Дано:\n%5d\n%5d\n-----\nОтвет:\n%f\n", n, L, result);
    return 0;
}

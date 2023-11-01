#include <stdio.h>
#include <math.h>

// fungsi yang akan diintegrasikan
double f(double x) {
    return (5*x)+2; // ganti dengan sebuah fungsi
}

// menghitung integral dengan metode trapesium
double integral_trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double result = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        result += f(x);
    }
    return h * result;
}

int main() {
    double a, b, integral;
    int n;

    printf("Masukkan batas bawah (a): ");
    scanf("%lf", &a);
    printf("Masukkan batas atas (b): ");
    scanf("%lf", &b);
    printf("Masukkan jumlah subinterval (n): ");
    scanf("%d", &n);

    integral = integral_trapezoidal(a, b, n);

    printf("Hasil integral dari 5x + 2 (numerik) = %lf\n", integral);
    printf("Hasil integral dari 5x + 2 (analitik) = 14\n");

    return 0;
}

//Să se scrie un program în C care să rezolve o ecuație de gradul 2, cu coeficienții a, b, c
//reali introduși de la tastatura.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//
//int main() {
//    float a, b, c, D,x1,x2;
//    printf("a="); 
//    scanf("%f", &a);
//    printf("b="); 
//    scanf("%f", &b);
//    printf("c="); 
//    scanf("%f", &c);
//    
//    D = pow(b,2) - 4 * a * c;
//
//    printf("%f", D);
//    if (D < 0) {
//        printf("ecuatia nu are solutii reale!");
//    }else if (D == 0) {
//        printf("Ecuatia are o solutie ");
//        x1 =(-b + sqrt(D)) / (2 * a);
//      
//        printf("Solutie este egala cu X1=X2=%f", x1);
//    } else if (D > 0) {
//        x1 = (-b + sqrt(D)) / (2 * a);
//        x2 = (-b - sqrt(D)) / (2 * a);
//        printf("Ecuatia are 2 solutii X1=%f,X2=%f", x1, x2);
//    }
//
//    return 0;
//}
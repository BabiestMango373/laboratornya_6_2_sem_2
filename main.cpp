//
//  main.cpp
//  лаба  6_2 сем 2
//
//  Created by Andrey Scherbakov on 12.02.2024.
//

#include <iostream>
#include <cmath>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}
double f_n(double x, int n) {
    if(x!=0){
        return -1 * pow(1, n) * (2 * pow(n, 2) + 1) / fact(2*n)  * pow(x, 2*n);

    }
    else
        return x;
}
int main(){
    setlocale(LC_ALL,"RU");
    double x ;
    int n ;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите n: ";
    cin >> n;
    if(n!=0){
        double sum = f_n(x,n);
        cout << sum << endl;
    }
    else
        cout<<"Ошибка"<< endl;
    
    return 0;
}

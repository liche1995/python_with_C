#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;
    time_t t_enity = time(0);
    tm* now = localtime(&t_enity);
    cin >> x;
    printf("hello\n");
    printf("%d\n", now->tm_mday);
    cout << x;
    system("pause");
    return 0;
}
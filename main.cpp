#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

class person{
    public:
        string name;
        int age;
        float height;
        float weight;
        char gender[1];
        void what_name();
};

void person::what_name(){
    cout << "My name is "<< name << endl;
}


int main(){
    int x;
    time_t t_enity = time(0);
    tm* now = localtime(&t_enity);
    cin >> x;
    printf("hello\n");
    printf("%d\n", now->tm_mday);
    cout << x;
    
    person p1;
    cin >> p1.name >> p1.age >> p1.height >> p1.weight >> p1.gender;

    p1.what_name();

    system("pause");
    return 0;
}
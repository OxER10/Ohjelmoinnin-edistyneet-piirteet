#include <iostream>

void swap1(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {  
    int yksi = 1, kaksi = 2, kolme = 3, nelja = 4;
    int *ptr1 = &kolme, *ptr2 = &nelja;
    std::cout << "Yksi = " << yksi <<", kaksi = " << kaksi << " Ennen swap1" << std::endl;
    std::cout << "Kolme = " << kolme <<", nelja = " << nelja << " Ennen swap2" << std::endl;
    swap1(&yksi, &kaksi);
    swap2(*ptr1, *ptr2);
    std::cout << "Yksi = " << yksi <<", kaksi = " << kaksi << " Jalkeen swap1" << std::endl;
    std::cout << "Kolme = " << kolme <<", nelja = " << nelja << " Jalkeen swap2" << std::endl;
}


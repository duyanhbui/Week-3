#include <iostream>

extern void printer(int array[10][10]);

int main(int argc,char **argv){
    int array[10][10] = {0};
    printer(array);
}
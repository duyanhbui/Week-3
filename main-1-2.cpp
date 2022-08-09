#include <iostream>

extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(int argc,char **argv){
    std :: string courses[4] = {"Math","OOP", "STATS", "Literature"};
    std::string students[2] = {"A","B"};
    int nstudent = 2;
    int report_card[2][4] = {{1,2,3,4}
                            ,{5,6,7,8}};

    print_class(courses,students,report_card,nstudent);

}
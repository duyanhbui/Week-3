#include <iostream>

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){
    std :: cout << "Report Card" << " ";
    for(int num_course =0 ; num_course < 4;num_course++){
        std :: cout << courses[num_course] << " ";
    }
    std :: cout << std ::endl;

    for(int num_student = 0; num_student < nstudents; num_student++){

        std :: cout << students[num_student] << " ";
        for(int num_course =0 ; num_course < 4;num_course++){
            std :: cout << report_card[num_student][num_course] << " ";
    } std :: cout << std :: endl;
}

}

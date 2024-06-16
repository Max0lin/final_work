#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "myhead.h"

#define MAX_STUDENT 10






int main() {
    // 創建並初始化學生實例
    Student students[MAX_STUDENT];
    randominitStudents(students, MAX_STUDENT);

    sortStudents(students, MAX_STUDENT , "SID");
    printStudent(students, MAX_STUDENT);

    sortStudents(students, MAX_STUDENT  , "Name");
    printStudent(students, MAX_STUDENT);

    return 0;
}

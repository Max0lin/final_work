#include <stdlib.h>
#include "myhead.h"
#include <string.h>

// Comparison function for qsort
int compareStudents(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return -strcmp(studentA->sid, studentB->sid);

}

// Comparison function by name
int compareStudentsByName(const void* a, const void* b) {
    Student* studentA = (Student*)a;
    Student* studentB = (Student*)b;
    return strcmp(studentA->name, studentB->name);
}


// Function to sort students by SID
void sortStudents(Student* students, int numStudents, const char* sortBy) {
    if (strcmp(sortBy, "SID") == 0) {
        qsort(students, numStudents, sizeof(Student), compareStudents);
    } else if (strcmp(sortBy, "Name") == 0) {
        qsort(students, numStudents, sizeof(Student), compareStudentsByName);
    } else {
        // Handle invalid sortBy parameter
        printf("Invalid sortBy parameter: %s\n", sortBy);
    }
}

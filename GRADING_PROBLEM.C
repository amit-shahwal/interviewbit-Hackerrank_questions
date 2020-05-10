// GRADING_STUDNETS | HACKERRANK C FUNCTION


int * gradingStudents(int grades_count, int * grades, int * result_count) {

  * result_count = grades_count;

  int * a = malloc(grades_count * sizeof(int));

  for (int i = 0; i < grades_count; i++) {
    int k = * (grades + i);
    int tk = k;
    while (tk % 5 != 0) {
      tk++;
    }
    // printf("\t%d",tk);
    if (tk >= 40 && tk - k < 3) {
      *(a + i) = tk;
    } else {
      *(a + i) = k;
    }

  }
  return a;
}
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 15
#define MAX_ENTRIES 30

struct date
{
  int day;
  char month[MAX_CHAR];
  int year;
};

// "Apelido" Date para o tipo struct date
typedef struct date Date;

// Apelidar ao mesmo tempo que se cria a struct
typedef struct student
{
  char first_name[MAX_CHAR];
  char last_name[MAX_CHAR];
  Date birth; // Variavel do tipo Date (stuct date)
}
Student;

int
main()
{
  Student students[MAX_ENTRIES];
  char f_name[MAX_CHAR], l_name[MAX_CHAR], month[MAX_CHAR];
  int i, n, day, year;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%s %s", f_name, l_name);
    scanf("%d %s %d", &day, month, &year);

    strcpy(students[i].first_name, f_name); // ponto acessa variavel
    strcpy(students[i].last_name, l_name);

    students[i].birth.day = day;
    students[i].birth.year = year;
    strcpy(students[i].birth.month, month);
  }

  for (i = 0; i < n; i++)
  {
    printf("\n%s %s\n", students[i].first_name,
                        students[i].last_name);
    printf("%d %s %d\n", students[i].birth.day,
                       students[i].birth.month,
                       students[i].birth.year);
  }

  return 0;
}

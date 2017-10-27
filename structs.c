#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

int main() {
  person nat;

  nat.name = "Natalie";
  nat.age = 22;
  printf("%s is %d years old.", nat.name, nat.age);
}

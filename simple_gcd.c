#include <stdio.h>
#include <gmp.h>

int main(int argc, char const *argv[]) {
  FILE *fptr;
  char buffer[1024];
  // create three gmp integer objects
  mpz_t first, second, gcd;

  fptr = fopen("file.txt", "r");
  // read first number
  fscanf(fptr, "%1023s", buffer);
  mpz_init_set_str(first, buffer, 16);
  // read second number
  fscanf(fptr, "%1023s", buffer);
  mpz_init_set_str(second, buffer, 16);
  // compute gcd
  mpz_gcd(gcd, first, second);
  // print gcd
  mpz_out_str(stdout, 10, gcd);
  printf("\n");
  
  fclose(fptr);
  return 0;
}
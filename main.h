#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <stdint.h>

#define M_PI 3.14159265358979323846

typedef double float64_t;
typedef int main_return_t;

main_return_t main(void);
int8_t check_valid_size(int8_t checking_number);
float64_t calculate_circle_area(int8_t radius);

#endif

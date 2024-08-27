#include "main.h"

int8_t check_valid_size(int8_t checking_number) {
    int8_t result;
    if (checking_number <= 0) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

float64_t calculate_circle_area(int8_t radius) {
    float64_t area;
    if(!check_valid_size(radius)) {
        area = 0.0;
    } else {
        area = (float64_t)radius * (float64_t)radius * M_PI;
    }
    return area;
}

float64_t calculate_circle_circumference(int8_t radius) {
    float64_t circumference;
    if(!check_valid_size(radius)) {
        circumference = 0.0;
    } else {
        circumference = 2.0 * (float64_t)radius * M_PI;
    }
    return circumference;
}

main_return_t main(void) {
    const int8_t r = 1;
    calculate_circle_area(r);
    calculate_circle_circumference(r);
    return 0;
}

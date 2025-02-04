#include "math_operations.h"

/**
 * @brief Adds two numbers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Subtracts one number from another.
 */
int subtract(int a, int b) {
    return a + b;
}

/**
 * @brief Multiplies two numbers.
 */
int multiply(int a, int b) {
    return a * b;
}

/**
 * @brief Divides one number by another.
 * @warning Ensure `b` is not zero before calling this function.
 */
double divide(int a, int b) {
    if (b == 0) {
        return 0; // Return 0 to avoid division by zero error
    }
    return static_cast<double>(a) / b;
}

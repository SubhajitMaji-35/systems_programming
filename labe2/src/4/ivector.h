/*
 * Header file for ivector implementation
 *
 */

// TODO: Add appropriate headers and macro statements

#ifndef IVECTOR_H
#define IVECTOR_H
#include <stdio.h>
#include <stdlib.h>

struct ivector {
  unsigned int size;
  unsigned int* vec;
};

typedef struct ivector Ivector;

/* 
 * Takes in two vectors (which may be NULL) and computes the inner product.
 * Inner product of two vectors v1, v2 is given by
 *  v1(0)*v2(0) + v1(1) * v2(1) + and so on
 *
 * @arg v1 Pointer to the first Ivector
 * @arg v2 Pointer to the second Ivector
 * @arg valid Pointer to valid variable
 * @return If one of the argument is a NULL, then the function returns 0 and
 *         and invalid is set to 1. If the length of the two vectors do not match, then
 *         also function returns 0 and the invalid is set to 1. In other cases,
 *         the inner product is computed and returned.
 *
 */
unsigned int inner_product(Ivector* v1, Ivector* v2, int* invalid);

/*
 * Takes in two vectors (which may be NULL) and computes their component wise sum.
 *
 * @arg v1 Pointer to the first Ivector
 * @arg v2 Pointer to the second Ivector
 * @return If one of the argument is a NULL or the length of the two vectors do
 *         not match, then the function returns NULL. In other cases, a new Ivector is
 *         created, sum stored in it and a pointer to this ivector is returned. 
 */
Ivector* add(Ivector* v1, Ivector* v2);

/*
 * Takes a vector (which may be NULL) and a non-negative integer and multiplies
 * each component of the vector by the non-negative integer (there by scaling it).
 *
 * @arg v Pointer to an Ivector
 * @arg c Non-negative scalar
 * @return If v is NULL, then the function returns NULL. In other cases, a new Ivector is
 *         created, scaled vector stored in it and a pointer to this ivector is returned. 
 */
Ivector* scalarmult(Ivector* v, unsigned int c);

/*
 * Takes a vector (which may be NULL) and prints it
 *
 * @arg v Pointer to an Ivector
 *
 * If v is NULL, it returns, Otherwise, the function prints the components to
 * stdout.
 *
 */
void print(Ivector* v);

// TODO: Add appropriate macro code
#endif

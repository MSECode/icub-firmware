//
// Non-Degree Granting Education License -- for use at non-degree
// granting, nonprofit, education, and research organizations only. Not
// for commercial or industrial use.
//
// File: zero_crossing_types.h
//
// Code generated for Simulink model 'control_foc'.
//
// Model version                  : 5.12
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Thu Oct 12 19:04:15 2023
//
#ifndef ZERO_CROSSING_TYPES_H
#define ZERO_CROSSING_TYPES_H
#include "rtwtypes.h"

// Trigger directions: falling, either, and rising
typedef enum {
  FALLING_ZERO_CROSSING = -1,
  ANY_ZERO_CROSSING = 0,
  RISING_ZERO_CROSSING = 1
} ZCDirection;

// Previous state of a trigger signal
typedef uint8_T ZCSigState;

// Initial value of a trigger zero crossing signal
#define UNINITIALIZED_ZCSIG            0x03U
#define NEG_ZCSIG                      0x02U
#define POS_ZCSIG                      0x01U
#define ZERO_ZCSIG                     0x00U

// Current state of a trigger signal
typedef enum { FALLING_ZCEVENT = -1, NO_ZCEVENT = 0, RISING_ZCEVENT = 1 }
  ZCEventType;

#endif                                 // ZERO_CROSSING_TYPES_H

//
// File trailer for generated code.
//
// [EOF]
//
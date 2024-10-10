#pragma once 

#include <time.h>
#include <sys/time.h>
#include <stdio.h>
#include <limits.h>
#include <assert.h>
#include <sys/syscall.h>

extern void ItrTime_SetStartTime();
extern double ItrTime_GetElapsedTime();


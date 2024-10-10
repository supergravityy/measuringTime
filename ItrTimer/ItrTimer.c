#include "ItrTimer.h"

// wsl 리눅스에서는 timespec은 사용할 수 있지만, clock_gettime함수는 왠지 쓸수가 없음
// lib 파일에 가봐도 원하는 time.h를 찾을 수 없었음

static struct timeval vItrTime_StartTime = {0};
static struct timeval vItrTime_EndTime = {0};

void ItrTime_SetStartTime()
{
	gettimeofday(&vItrTime_StartTime, NULL);
}

double ItrTime_GetElapsedTime()
{
	double delta_t;

	gettimeofday(&vItrTime_EndTime, NULL);
    delta_t = (vItrTime_EndTime.tv_sec - vItrTime_StartTime.tv_sec) * 1e6 + 
              (vItrTime_EndTime.tv_usec - vItrTime_StartTime.tv_usec);  // us 단위로 최대한 정밀하게!

    vItrTime_StartTime = vItrTime_EndTime;

    return (delta_t / 1e6); // sec 단위로 변환
}
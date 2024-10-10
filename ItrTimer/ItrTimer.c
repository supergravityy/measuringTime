#include "ItrTimer.h"

// wsl ������������ timespec�� ����� �� ������, clock_gettime�Լ��� ���� ������ ����
// lib ���Ͽ� ������ ���ϴ� time.h�� ã�� �� ������

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
              (vItrTime_EndTime.tv_usec - vItrTime_StartTime.tv_usec);  // us ������ �ִ��� �����ϰ�!

    vItrTime_StartTime = vItrTime_EndTime;

    return (delta_t / 1e6); // sec ������ ��ȯ
}
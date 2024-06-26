#ifndef GcTimeScheduler_h
#define GcTimeScheduler_h

#include "public/platform/Platform.h"
#include "vc6/include/wnet/xpapi.h"

namespace blink {

// ����ڴ����xxM���ͻ���һ�Ρ����´�����ڴ滹�Ǵ���xxM���Ǿ͵�һ��ʱ���ٻ��գ���ֹ��ͣ��Ϊ��ԭ�����
class GcTimeScheduler {
public:
    const double kNextFireIntervalSec = 60;

    GcTimeScheduler()
    {
        double time = Platform::current()->monotonicallyIncreasingTime();
        m_lastGcTime = time;
        m_lastQueryMemTime = time;
    }

    bool needGc()
    {
        double time = Platform::current()->monotonicallyIncreasingTime();
        if (needGcByQueryMem(time))
            return true;

        if (time - m_lastGcTime < kNextFireIntervalSec)
            return false;
        m_lastGcTime = time;
        return true;
    }

    void setNextFireInterval(double sec)
    {
        double time = Platform::current()->monotonicallyIncreasingTime();
        m_lastGcTime = time - kNextFireIntervalSec + sec;
    }

private:

    bool needGcByQueryMem(double time)
    {
        const double kNextFireQueryMemIntervalSec = 3;
        if (time - m_lastQueryMemTime < kNextFireQueryMemIntervalSec)
            return false;

        m_lastQueryMemTime = time;
        HANDLE handle = GetCurrentProcess();
        PROCESS_MEMORY_COUNTERS_EX pmc = { 0 };
        if (!GetProcessMemoryInfoXp(handle, (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc)))
            return false;

        if (pmc.PeakPagefileUsage / (1024 * 1024) > 500)
            return true;

        return false;
    }

    double m_lastGcTime;
    double m_lastQueryMemTime;
};

}

#endif
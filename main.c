#include <stdio.h>
#include "log.h"
 
static int a = 0;
static int b = 0;
int main(void)
{
    log_open("mycat");
    while(1)
    {
        LOG_TRACE("trace");
        LOG_ERROR("abcdefghijklmnopqrstuvwxyz 1234567890 ~!@#$%^&*()");
        LOG_WARN("abcdefghijklmnopqrstuvwxyz 1234567890 ~!@#$%^&*()");
        LOG_NOTICE("abcdefghijklmnopqrstuvwxyz 1234567890 ~!@#$%^&*()");
        LOG_DEBUG("abcdefghijklmnopqrstuvwxyz 1234567890 ~!@#$%^&*()");
	if(a >= 2147483647)
	{
		a = 0;
		b++;
	}
        LOG_DEBUG("----------------------%d----------%d----------------", a++, b);
	sleep(1);
    }
    log_close();
    return 0;
}

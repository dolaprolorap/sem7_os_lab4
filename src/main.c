#include "serial_port.h"
#include "logger.h"
#include "utils.h"
#include <stdio.h>

int main(void)
{
    start_serial();

    start_hourly_logger();
    start_daily_logger();

    start_clear_logger();

    for (int i = 0; i < 100; i++)
    {
        double temperature = read_serial();

        log_temperature(temperature);

        sleep_(1);
    }

    return 0;
}

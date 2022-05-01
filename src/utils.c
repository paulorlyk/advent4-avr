//
// Created by palulukan on 5/1/22.
//

#include "utils.h"

#include <avr/wdt.h>

void reset_mcu() {
    wdt_enable(WDTO_30MS);

    for(;;);
}

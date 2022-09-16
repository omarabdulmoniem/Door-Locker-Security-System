#ifndef INTERNAL_EEPROM_H_
#define INTERNAL_EEPROM_H_



#include "micro_configuration.h"
#include "std_types.h"
#include "common_macros.h"

void EEPROM_write(unsigned short uiAddress, unsigned char ucData) ;

unsigned char EEPROM_read(unsigned short uiAddress);

#endif /* INTERNAL_EEPROM_H_ */

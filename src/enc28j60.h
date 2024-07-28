/*
 * @breaf: ...
 *
 * @author: marcin.ryzewskii@gmail.com 
 * */

#ifndef __ENC28j60_H__ 
#define __ENC28j60_H__ 

#include <stdint.h> 


// CONTROL REG MEMORY MAP 
// BANK 0

// Bank 0
#define ERDPTL 0x00
#define ERDPTH 0x01
#define EWRPTL 0x02
#define EWRPTH 0x03
#define ETXSTL 0x04
#define ETXSTH 0x05
#define ETXNDL 0x06
#define ETXNDH 0x07
#define ERXSTL 0x08
#define ERXSTH 0x09
#define ERXNDL 0x0A
#define ERXNDH 0x0B
#define ERXRDPTL 0x0C
#define ERXRDPTH 0x0D
#define ERXWRPTL 0x0E
#define ERXWRPTH 0x0F
#define EDMASTL 0x10
#define EDMASTH 0x11
#define EDMANDL 0x12
#define EDMANDH 0x13
#define EDMADSTL 0x14
#define EDMADSTH 0x15
#define EDMACSL 0x16
#define EDMACSH 0x17
////#define NONE 0x18
////#define NONE 0x19

// Bank 1
#define EHT0 0x00
#define EHT1 0x01
#define EHT2 0x02
#define EHT3 0x03
#define EHT4 0x04
#define EHT5 0x05
#define EHT6 0x06
#define EHT7 0x07
#define EPMM0 0x08
#define EPMM1 0x09
#define EPMM2 0x0A
#define EPMM3 0x0B
#define EPMM4 0x0C
#define EPMM5 0x0D
#define EPMM6 0x0E
#define EPMM7 0x0F
#define EPMCSL 0x10
#define EPMCSH 0x11
//#define NONE 0x12
//#define NONE 0x13
#define EPMOL 0x14
#define EPMOH 0x15
////#define Reserved 0x16
////#define Reserved 0x17
#define ERXFCON 0x18
#define EPKTCNT 0x19

// Bank 2
#define MACON1 0x00
//#define Reserved 0x01
#define MACON3 0x02
#define MACON4 0x03
#define MABBIPG 0x04
//#define NONE 0x05
#define MAIPGL 0x06
#define MAIPGH 0x07
#define MACLCON1 0x08
#define MACLCON2 0x09
#define MAMXFLL 0x0A
#define MAMXFLH 0x0B
//#define Reserved 0x0C
//#define Reserved 0x0D
//#define Reserved 0x0E
//#define NONE 0x0F
//#define Reserved 0x10
//#define Reserved 0x11
#define MICMD 0x12
//#define NONE 0x13
#define MIREGADR 0x14
//#define Reserved 0x15
#define MIWRL 0x16
#define MIWRH 0x17
#define MIRDL 0x18
#define MIRDH 0x19

// Bank 3
#define MAADR5 0x00
#define MAADR6 0x01
#define MAADR3 0x02
#define MAADR4 0x03
#define MAADR1 0x04
#define MAADR2 0x05
#define EBSTSD 0x06
#define EBSTCON 0x07
#define EBSTCSL 0x08
#define EBSTCSH 0x09
#define MISTAT 0x0A
//#define NONE 0x0B
//#define NONE 0x0C
//#define NONE 0x0D
//#define NONE 0x0E
//#define NONE 0x0F
//#define NONE 0x10
//#define NONE 0x11
#define EREVID 0x12
//#define NONE 0x13
//#define NONE 0x14
#define ECOCON 0x15
//#define Reserved 0x16
#define EFLOCON 0x17
#define EPAUSL 0x18
#define EPAUSH 0x19


typedef struct {
    
} enc28j60_init_t; 

typedef struct {
    
} enc28j60_context_t; 

typedef struct {
    uint8_t EIE; 
    uint8_t EIR; 
    uint8_t ESTAT; 
    uint8_t ECON2; 
    uint8_t ECON1; 

} enc28j60_common_reg_t;


void enc_init(enc28j60_context_t *ctx, enc28j60_init_t *init);
void enc_open(enc28j60_context_t *ctx);
void enc_reset(enc28j60_context_t *ctx);

void enc_read_buffer(enc28j60_context_t *ctx);
void enc_write_buffer(enc28j60_context_t *ctx);

void enc_set(enc28j60_context_t *ctx);
void enc_clear(enc28j60_context_t *ctx);

// Glue declaration 
void spi_read(uint8_t *buff, uint32_t len);
void spi_write(uint8_t *buff, uint32_t len);

void spi_write();
#endif

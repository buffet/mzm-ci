#ifndef GBA_WAITSTATE_H
#define GBA_WAITSTATE_H

#define REG_WAITCNT (REG_BASE + 0x204)

enum waitstate {
    WAIT_SRAM_4CYCLES = 0,
    WAIT_SRAM_3CYCLES = 1 << 0,
    WAIT_SRAM_2CYCLES = 1 << 1,
    WAIT_SRAM_8CYCLES = 1 << 0 | 1 << 1,

    WAIT_BANK0_4CYCLES           = 0,
    WAIT_BANK0_3CYCLES           = 1 << 2,
    WAIT_BANK0_2CYCLES           = 1 << 3,
    WAIT_BANK0_8CYCLES           = 1 << 2 | 1 << 3,
    WAIT_BANK0_SUBSEQUENT_1CYCLE = 1 << 4,

    WAIT_BANK1_4CYCLES           = 0,
    WAIT_BANK1_3CYCLES           = 1 << 5,
    WAIT_BANK1_2CYCLES           = 1 << 6,
    WAIT_BANK1_8CYCLES           = 1 << 5 | 1 << 6,
    WAIT_BANK1_SUBSEQUENT_1CYCLE = 1 << 7,

    WAIT_BANK2_4CYCLES           = 0,
    WAIT_BANK2_3CYCLES           = 1 << 8,
    WAIT_BANK2_2CYCLES           = 1 << 9,
    WAIT_BANK2_8CYCLES           = 1 << 8 | 1 << 9,
    WAIT_BANK2_SUBSEQUENT_1CYCLE = 1 << 10,

    WAIT_TERMOUT_4_19MHZ  = 1 << 11,
    WAIT_TERMOUT_8_38MHZ  = 1 << 12,
    WAIT_TERMOUT_16_76MHZ = 1 << 11 | 1 << 12,

    WAIT_PREFETCH = 1 << 13,

    WAIT_GAMEPACK_CGB = 1 << 14,
};

#endif /* GBA_WAITSTATE_H */

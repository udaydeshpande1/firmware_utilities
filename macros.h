/* Common utilities used in firmware */

/* Helper macros */

/* Get 8-byte aligned memory */
#define ALIGN8(x) (((x)+7) & (~7))

/* Get 4-byte aligned memory */
#define ALIGN8(x) (((x)+3) & (~3))
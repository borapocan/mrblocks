#ifndef CONFIG_H
#define CONFIG_H

#define DELIMITER " "

#define MAX_BLOCK_OUTPUT_LENGTH 45

#define CLICKABLE_BLOCKS 1

#define LEADING_DELIMITER 0

#define TRAILING_DELIMITER 0

#define BLOCKS(X)         \
    X("sb-kbselect", 10, 5)     \
    X("sb-brightness", 1, 6)     \
    X("sb-bluetooth", 1, 2)  \
    X("sb-internet", 1, 1) \
    X("sb-volume", 1, 3)  \
    X("sb-battery", 1, 4) \

#endif  // CONFIG_H

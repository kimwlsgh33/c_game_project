#ifndef DISPLAY_TETRIS_H
#define DISPLAY_TETRIS_H

#include <stdio.h>
#include <stdlib.h>
int block[4][4][4] = {{{1, 1, 1, 1}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}},
                      {{0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}},
                      {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}, {0, 0, 0, 0}},
                      {{1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}, {1, 0, 0, 0}}};

int tetris_table[21][10];
int block_state = 0;
#endif // DISPLAY_TETRIS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#define REG_COUNT 16
#define INVALID_REG 17

unsigned long long execution_time;
unsigned long long request_get;
unsigned long long request_done;
unsigned long long line_num;


class Simple_Pipe{
public:
  
    int registers[16];
    void print_regs();

};

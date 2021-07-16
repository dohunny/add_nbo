// add-nbo.h
#pragma once
#include <stdio.h> 
#include <stdlib.h> // for htonl
#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include "add-nbo.h"

uint8_t* bin2hex(char* filename, char* buf, int len);
void add_nbo(char *argv[]);
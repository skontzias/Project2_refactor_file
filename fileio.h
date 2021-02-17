
#ifndef HEADER_FILEIO_H
#define HEADER_FILEIO_H
#include <vector>
#include <string>
#include "../includes/constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
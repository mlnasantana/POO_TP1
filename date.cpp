#include "date.h"
#include <ctime>

string Date::formatarData() {
    time_t t = time(0);
    struct tm* now = localtime(&t);
    return to_string(now->tm_mday) + "/" + to_string(now->tm_mon + 1) + "/" + to_string(now->tm_year + 1900);
}

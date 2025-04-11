#pragma once
#include <regex>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <ctype.h>
#include <conio.h>
#include "InputManagement.h"

typedef struct Contact {
    std::string name;
    std::string address;
    std::string city;
    std::string postalCod;
    std::string province;
    std::string phoneNumber;
} Contact;

#define PROVINCE R"(^N[BUSLT]$|^[QB]C$|^[AM]B$|^[YN]T$|^SK$|^ON$|^\n$)"
#define NAME R"(^[a-zA-Z-.\s]{0,30}$)"
#define POSTAL_CODE R"(^[a-zA-Z]\d[a-zA-Z]\s\d[a-zA-Z]\d$)"
#define PHONE R"(^\d{3}-\d{3}-\d{4}$)"
#define ADDRESS R"(^[a-zA-Z-.\s]{0,60}$)"
#define CITY R"(^[a-zA-Z-.\s]{0,60}$)"

std::string validateName(std::string input);
std::string validateAddress(std::string input);
std::string validateCity(std::string input);
std::string validateProvince(std::string input);
std::string validatePostalCode(std::string input);
std::string validatePhone(std::string input);
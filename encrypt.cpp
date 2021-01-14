#include <iostream>
#include <string>
#include "encrypt.h"

std::string caesar_encrypt(std::string input, int key) {
    std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789,.!?";
    chars.append(chars);  // Double the string length to simulate index wrap-around
    int input_length = input.length();
    for (int i = 0; i < input_length - 1; i++) {
        // Find character of input in "chars" string, move it along by "key" indices, replace char
    }
}
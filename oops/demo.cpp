#include <iostream>
#include <cstdlib>   // For rand() function
#include <ctime>     // For time() function
#include <openssl/sha.h>   // For SHA256 functions
#include <iomanip>   // For std::setw and std::setfill

// Function to calculate SHA-256 hash and return as hexadecimal string
std::string sha256(const std::string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.length());
    SHA256_Final(hash, &sha256);

    std::stringstream ss;
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }

    return ss.str();
}

int main() {
    // Generate a random number
    srand(time(nullptr));  // Seed for rand() based on current time
    int randomNumber = rand();  // Generate a random integer

    // Display the random number
    std::cout << "Random Number: " << randomNumber << std::endl;

    // Convert random number to string
    std::string randomString = std::to_string(randomNumber);

    // Calculate SHA-256 hash and convert to hexadecimal string
    std::string hashValue = sha256(randomString);

    // Display the hexadecimal hash value
    std::cout << "SHA-256 Hash Value (Hex): " << hashValue << std::endl;

    return 0;
}

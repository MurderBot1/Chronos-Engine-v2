// © 2025 Trent Cridland, Murderbot1@outlook.com, All Rights Reserved.
/* Some parts of this engine can be used either for free or for a cost, look at the EngineSections.txt document for more information. */

#ifndef ClassIdentifier_CPP
#define ClassIdentifier_CPP

// Include the C++'s .h file
#include "ClassIdentifier.h"

// Variable redefinitions
uint64_t IdentityToken::CurrentIdentifierToken;
std::mutex IdentityToken::CurrentIdentifierToken_MX;

// Definitions
void IdentityToken::LoadIdentity() {
    std::lock_guard<std::mutex> ThisIdentifierTokenLock(IdentifierToken_MX);
    IdentifierToken = IdentityToken::CurrentIdentifierToken; 
    std::lock_guard<std::mutex> CurrentIdentifierTokenLock(IdentityToken::CurrentIdentifierToken_MX);
    IdentityToken::CurrentIdentifierToken++;
}

void IdentityToken::StartIdentityToken() {
    std::lock_guard<std::mutex> CurrentIdentifierTokenLock(IdentityToken::CurrentIdentifierToken_MX);
    IdentityToken::CurrentIdentifierToken = 0;
}

uint64_t IdentityToken::GetIdentifierToken() {
    std::lock_guard<std::mutex> ThisIdentifierTokenLock(IdentifierToken_MX);
    return IdentifierToken;
}

#endif
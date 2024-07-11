
// in this function space is considered as true , like "hello world" is output as true ! 
bool isAlphaOrSpace(const std::string& str) {
    for (char c : str) {
        // Check if the character is either an alphabetic letter or a space
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')) {
            return false;
        }
    }
    return true;
}

// -- strictly alphabets only , in this function even space is also cansidered as a non alphabetic , 
// thus here "hello world" will give output as false 

bool isAlpha(const std::string& str) {
    for (char c : str) {
        // Check if the character is between 'A' and 'Z' or 'a' and 'z'
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            return false;
        }
    }
    return true;
}

int Solution::titleToNumber(string A) {
     int result = 0;
    for (const auto& c : A)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }

    return result;
}

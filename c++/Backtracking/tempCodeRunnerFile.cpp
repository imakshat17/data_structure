string FindString(string str, int maxi) {
    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == str[i + 1] && str[i] == str[i + 2] && (str[i] - '0') > maxi) {
            return str.substr(i, 3);
        }
    }

   
    return "";
}
#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String() : length(0), str(nullptr) {}

    String(const char* cString) : length(strlen(cString)) {
        str = new char[length + 1];
        strcpy(str, cString);
    }

    String(const String& other) : length(other.length) {
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            length = other.length;
            str = new char[length + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    int getLength() const {
        return length;
    }

    void clear() {
        delete[] str;
        length = 0;
        str = nullptr;
    }

    ~String() {
        delete[] str;
    }

    String operator+(const String& other) const {
        String result;
        result.length = length + other.length;
        result.str = new char[result.length + 1];

        strcpy(result.str, str);
        strcat(result.str, other.str);

        return result;
    }

    String& operator+=(const String& other) {
        *this = *this + other;
        return *this;
    }

    bool operator==(const String& other) const {
        return (length == other.length) && (strcmp(str, other.str) == 0);
    }

    bool operator!=(const String& other) const {
        return !(*this == other);
    }

protected:
    int length;
    char* str;
};

class BinaryString : public String {
public:
    BinaryString() : String() {}

    BinaryString(const char* cString) : String() {
        setBinaryString(cString);
    }

    BinaryString(const BinaryString& other) : String(other) {}

    BinaryString& operator=(const BinaryString& other) {
        if (this != &other) {
            String::operator=(other);
        }
        return *this;
    }

    ~BinaryString() {}

    void changeSign() {
        for (int i = 0; i < length; ++i) {
            if (str[i] == '0') {
                str[i] = '1';
            }
            else if (str[i] == '1') {
                str[i] = '0';
            }
        }
    }

    BinaryString operator+(const BinaryString& other) const {
        BinaryString result;
        result.length = max(length, other.length) + 1;
        result.str = new char[result.length + 1];

        char* sum = new char[result.length + 1];
        sum[result.length] = '\0';

        char carry = '0';

        for (int i = result.length - 1; i >= 0; --i) {
            char bit1 = (i >= result.length - length) ? str[i - (result.length - length)] : '0';
            char bit2 = (i >= result.length - other.length) ? other.str[i - (result.length - other.length)] : '0';

            int bitSum = (bit1 - '0') + (bit2 - '0') + (carry - '0');
            sum[i] = (bitSum % 2) + '0';
            carry = (bitSum / 2) + '0';
        }

        result.str = strcpy(result.str, sum);

        delete[] sum;
        return result;
    }

    BinaryString& operator+=(const BinaryString& other) {
        *this = *this + other;
        return *this;
    }

    bool operator==(const BinaryString& other) const {
        return (length == other.length) && (strcmp(str, other.str) == 0);
    }

    bool operator!=(const BinaryString& other) const {
        return !(*this == other);
    }

private:
    void setBinaryString(const char* cString) {
        clear();

        while (*cString != '\0') {
            if (*cString != '0' && *cString != '1') {
                clear();
                return;
            }
            cString++;
        }

        length = strlen(cString);
        str = new char[length + 1];
        strcpy(str, cString);
    }
};
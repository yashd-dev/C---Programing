#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    // cout << "How you doin'" << endl;
    // cout << "How you doin'" << endl;

    // int A = 4;
    // cout << &A << endl;

    // A byte is 8 bit
    // char is 1 bit
    // Short is 2 byte or 16 bit
    // int and float is 4 byte or 32 bit
    // long and double is 8 byte or 64 bit
    // long double is 16 byte 128 bit
    // The XDR standard defines signed integers as integer.A signed integer is a
    // 32 - bit datum that encodes an integer in the range[-2147483648 to
    // 2147483647].An unsigned integer is a 32 - bit datum that encodes a
    // nonnegative integer in the range[0 to 4294967295].
    //  [8-bit] signed char: -127 to 127
    //  [8-bit] unsigned char: 0 to 255
    //  [16-bit]signed short: -32767 to 32767
    //  [16-bit]unsigned short: 0 to 65535
    //  [32-bit]signed long: -2147483647 to 2147483647
    //  [32-bit]unsigned long: 0 to 4294967295
    //  [64-bit]signed long long: -9223372036854775807 to 9223372036854775807
    //  [64-bit]unsigned long long: 0 to 18446744073709551615

    // float s1, s2, s3;
    // cin >> s1 >> s2 >> s3;

    // bool test1 = (0 < s1 && 0 < s2 && 0 < s3) && (s1 + s2 > s3) && (s2 + s3 >
    // s1) && (s3 + s1 > s2);

    // float semiperi = (s1 + s2 + s3) / 2;

    // float area = sqrt(semiperi * (semiperi - s1) * (semiperi - s2) * (semiperi
    // - s3));

    // area = (test1 ? area : 0);

    // cout << "Triangle is" << (test1 ? " Valid " : " Invalid");
    // cout << endl;

    // cout << "Area is: " << area;

    // return 0;

    // char ch;

    // cout << "Please input a valid character (Alphabet): ";
    // cin >> ch;

    // // check for valid alphabet
    // if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    // {
    //     // check case and convert into opposite case
    //     if (ch >= 'A' && ch <= 'Z')
    //         ch = ch + 32;
    //     else if (ch >= 'a' && ch <= 'z')
    //         ch = ch - 32;
    //     else
    //         ; // none

    //     cout << "converted character is: " << ch << endl;
    // }
    // else
    // {
    //     cout << "Entered character is not a valid alphabet!!!" << endl;
    // }
    char ch = 'A';
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << ch << " is a vowel";
        break;
    default:
        cout << ch << " is a consonant";
    }
}

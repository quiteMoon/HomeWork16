#include <iostream>
#include <string>

using namespace std;

// Task 1

//void deleteCharAtIndex(string& str, int index) {
//    if (index >= 0 && index <= str.length())
//    {
//        str.erase(index, 1);
//        cout << "Character at index " << index << " deleted successfully" << endl;
//    }
//    else {
//        cout << "Invalud index. Unable to delete character" << endl;
//    }
//}
//
//int main()
//{
//    string myString = "Hello World!";
//    int indexDelete;
//
//    cout << "Enter index to delete: ";
//    cin >> indexDelete;
//
//    cout << "Original string: " << myString << endl;
//    deleteCharAtIndex(myString, indexDelete);
//    cout << "Modified string: " << myString << endl;
//
//    
//}

// Task 2

//void deleteAllOccurrences(string& str, char ch) {
//    size_t pos = str.find(ch);
//    while (pos != string::npos) {
//        str.erase(pos, 1);
//        pos = str.find(ch, pos);
//    }
//    cout << "All occurrences of '" << ch << "' deleted successfully." << endl;
//}
//
//int main() {
//    string myString = "Hello, world!";
//    cout << "Original string: " << myString << endl;
//
//    char charToDelete;
//    cout << "Enter char to delete: ";
//    cin >> charToDelete;
//
//    deleteAllOccurrences(myString, charToDelete);
//
//    cout << "Modified string: " << myString << endl;
//}

// Task 3

//void insertCharAtIndex(string& str, int index, char ch) {
//    if (index >= 0 && index <= str.length()) {
//        str.insert(index, 1, ch);
//        cout << "Character '" << ch << "' inserted at index " << index << " successfully." << endl;
//    }
//    else {
//       cout << "Invalid index. Unable to insert character." << endl;
//    }
//}
//
//int main() {
//    string myString;
//    cout << "Enter a string: ";
//    getline(cin, myString);
//
//    int indexToInsert;
//    cout << "Enter the index where you want to insert the character: ";
//    cin >> indexToInsert;
//
//    char charToInsert;
//    cout << "Enter the character you want to insert: ";
//    cin >> charToInsert;
//
//    insertCharAtIndex(myString, indexToInsert, charToInsert);
//
//    cout << "Modified string: " << myString << endl;
//}

// Task 4

//void replaceDots(string& str) {
//    for (char& ch : str) {
//        if (ch == '.') {
//            ch = '!';
//        }
//    }
//}
//
//int main() {
//    string userString;
//    cout << "Enter a string: ";
//    getline(cin, userString);
//
//    replaceDots(userString);
//
//    cout << "Modified string: " << userString << endl;
//}

// Task 5

//int countNumber(const string& str, char target) {
//    int count = 0;
//    for (char ch : str) {
//        if (ch == target) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    string userString;
//    char targetChar;
//
//    cout << "Enter a string: ";
//    getline(cin, userString);
//    cout << "Enter the character you want to count: ";
//    cin >> targetChar;
//    cin.ignore(); 
//
//    int occurrences = countNumber(userString, targetChar);
//
//    cout << "The character '" << targetChar << "' occurs " << occurrences << " times in the string" << endl;
//}

// Task 6

//void countChar(const string& str, int& letterCount, int& digitCount, int& otherCount) {
//    letterCount = digitCount = otherCount = 0;
//
//    for (char ch : str) {
//        if (isalpha(ch)) {
//            letterCount++;
//        }
//        else if (isdigit(ch)) {
//            digitCount++;
//        }
//        else {
//            otherCount++;
//        }
//    }
//}
//
//int main() {
//    string inputString;
//    cout << "Enter a string: ";
//    getline(cin, inputString);
//
//    int letterCount, digitCount, otherCount;
//    countChar(inputString, letterCount, digitCount, otherCount);
//
//    cout << "Number of letters: " << letterCount << endl;
//    cout << "Number of digits: " << digitCount << endl;
//    cout << "Number of other characters: " << otherCount << endl;
//}
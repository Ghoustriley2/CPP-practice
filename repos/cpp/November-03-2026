#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <type_traits>

using namespace std;

// structs/classes

class StdUnv {
    public:
    int intg;
    char chr;
    string str;
    int check_flag;
    string flag;
    vector<string> argv;
    int count;
    
    public:
    int dtcheck() {
        if (intg != 0) {
            return 1;
        } else if (chr != '\0') {
            return 1;
        } else if (str != "") {
            return 1;
        } else {
            check_flag = 1;
            return 0;
        }
    }
    
    int flagset(auto src) {
        if (check_flag == 1) {
            if constexpr (is_same_v<decltype(src), int>) {
                flag = "int";
                return 0;
            } else if constexpr (is_same_v<decltype(src), char>) {
                flag = "char";
                return 0;
            } else if constexpr (
            is_same_v<decltype(src), string> || 
            is_same_v<decltype(src), const char*>) {
                flag = "str";
                return 0;
                
            } else {
                return 1;
            }
        }
        return -1;
    }
    
    void setargs(vector<string>& args) {
        argv = args;
        count = argv.size();
    }
};

// --- end of classes/structs

// function's

void sout(string text, StdUnv& args) {
    if (args.dtcheck() != 0) {
        cout << "error: dtcheck" << endl;
    }
    if (args.flagset(args.str) == 1) {
        cout << "error: flagset" << endl;
    }
    
    cout << text;
    for (int i = 0; i < args.count; i++) {
        cout << args.argv[i] << " ";
    }
    cout << endl;
}

// end of function's

int main() {
    vector<string> test_args = {
        "a", "b", "c", "d", "e",
        "f", "g", "h", "l"
    };
    StdUnv set1;
    set1.setargs(test_args);
    sout("hello ", set1);
    return 0;
}

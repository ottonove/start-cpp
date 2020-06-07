#include <iostream>
//#include <filesystem>
#include <vector>

//namespace fs = std::filesystem;
using namespace std;

int main(int, char**) {
    /*
    fs::path txtPath("main.cpp");
    cout << fs::exists(txtPath) << endl;
    cout << fs::absolute(txtPath) << endl;
    */

    std::vector<char> v = {'h','e','l','l','o'};

    for(int i=0; i<v.size(); i++){
        std::cout << v[i];
    }
    cout << " world!" << endl;

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main(int, char**) {

    vector<char> v = {'h','e','l','l','o'};

    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }
    cout << " world!" << endl;

    return 0;
}

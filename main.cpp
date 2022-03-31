#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i--) {
        cout << argv[i] << endl;
    }
    cout << "Hello from github!!!" << endl;
    cout << "SUPER Hello from github and new BRANCH!!!!!!!!" << endl;
    return 0;
}

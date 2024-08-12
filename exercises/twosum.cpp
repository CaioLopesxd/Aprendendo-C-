#include <iostream>

using namespace std;

int main(){
    int nums[4] = {2, 7, 11, 15}, target = 9;

    for (int i = 0; i < 4; i++){
        for (int j = i; j < 4; j++){
            cout << "Testing: " << endl;
            cout << nums[i] << "+" << nums[j] << " = " << nums[i] + nums[j] << endl;
            if (nums[i] + nums[j] == target){
                cout << "Target: " << target << endl;
                cout << "[" << nums[i] << "," << nums[j] << "]" << endl;
                cout << "[" << i << "," << j << "]" << endl;
                return 0;
            }
        }
    }

    return 0;
}
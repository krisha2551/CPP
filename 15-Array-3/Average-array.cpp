#include<iostream>

using namespace std;

int main(){

    int nums[4] = {33, 12, 65, 78};

    int size = sizeof(nums)/sizeof(nums[0]);

    int sum = 0;

    for(int i=0; i<size; i++){ // 0, 1, 2, 3, 4, 5

        sum = sum + nums[i]; //nums[0] == 33 , nums[1] == 12, nums[2]==65, nums[3] == 78, nums[4]== 4
        //sum = 0 + 33
        //sum = 33 +12
        // sum = 45 + 65
        // sum = 110 + 78
        // sum = 188 + 4
        // sum = 192

    }

 int avg = sum/size;

 cout << "avg: " << avg << endl;;



    return 0;
}
int firstMissingPositive(int* nums, int numsSize) {
    int present[100001];

    for(int i = 0; i < 100001; i++){
        present[i] = 0;
    }

    for(int i = 0; i < numsSize; i++){
        if(nums[i] > 100000 || nums[i] <= 0){
            continue;
        }
        present[nums[i]] = 1;
    }

    for(int i = 1; i <= 100000; i++){
        if(present[i] == 0){
            return i;
        }
    }

    return 100001;
}

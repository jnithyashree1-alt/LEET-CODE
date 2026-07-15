int trap(int* height, int heightSize) {
    int n = heightSize;
    int left[n];
    int right[n];
    int maxL = height[0];
    for(int i=0;i<n;i++) {
        if(height[i]>maxL)
            maxL=height[i];
        left[i]=maxL;
    }
    int maxR = height[n-1];
    for(int i=n-1;i>=0;i--){
        if(height[i]>maxR)
            maxR=height[i];
        right[i]=maxR;
    }
    int sum=0;
    for(int i=0;i<n;i++) {
        int mn;
        if(left[i]<right[i])
            mn=left[i];
        else
            mn=right[i];
        sum+=mn-height[i];
    }
    return sum;
}

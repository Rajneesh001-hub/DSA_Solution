class Solution {
public:
    int search(vector<int>& arr, int target) {

        int mid, start=0, end=arr.size()-1;

        while(start<=end){
            mid= end + (start-end)/2;

            if (arr[mid]==target){
                return mid;
            }
            else if(target > arr[mid]){
                start=mid+1;
            }
            else{
                end= mid-1;
            }


        
        }
        return -1;
        
    }
};
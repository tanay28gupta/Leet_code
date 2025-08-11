class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
     int n =nums.size();
     while(j<n)
     {
        if(nums[i]==nums[j]){
            j++;
        }
        else{
            i++;
            nums[i]=nums[j];
        }
       
     }
   return i+1;  
    }
};
//so in this question ehat i am doing is i am first creating a variable which will dipicts the entry of the vector say n
//then i am starting with placing i on the 0 position and j on the 1st posetion of the vector array 
//then i am checking i and j if they are equal then i am pushing j to the next position and checking again i=0 and j=2 if they are not same then i am incrementing the index of i and performing i=j to get the values of the jth index to the i index thereby its removing the duplicate value by overriding the value this way its correctin this code and we have to return the value of numbers inside the vector so i am returning the i+1 value to the front

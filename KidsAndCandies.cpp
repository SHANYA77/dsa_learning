class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int max=candies[0];
        for(int i=1;i<n;i++){
            if(candies[i]>max){//finding maximum in array
                max=candies[i];
            }
        }
        vector<bool> result(n,' ');
        for(int i=0;i<n;i++){
           if(extraCandies+candies[i]>=max){//comparing initial candies+extra candies with maximum
            result[i]=true;
           }
           else{
            result[i]=false;
           }
        }
        return result;
    }
};

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int res;
       if(str1+str2==str2+str1){
        res=gcd(str1.length(),str2.length());
       string result(res,' ');
       for(int i=0;i<res;i++){
        result[i]=str2[i];
       }
       return result;
       }
       else{
        return "";
       }
    }
    int gcd(int a,int b){//calculating gcd of lengths.
        int i=b;
        while(i>0){
            if(a%i==0&&b%i==0){
                break;
            }
            i--;
        }
        return i;
    }
};

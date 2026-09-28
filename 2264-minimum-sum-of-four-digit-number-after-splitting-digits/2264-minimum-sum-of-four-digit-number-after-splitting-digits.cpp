class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;

        while(num!=0){
            v.push_back(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());
        int n = v.size();
        int a = v[0]*10 + v[n-1];
        int b = v[1]*10 + v[n-2];

        return a+b;
        
    }
};
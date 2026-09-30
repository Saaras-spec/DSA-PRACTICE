class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> v;
        int i=0;
        for(char c : seq){
            if(c=='(') {
                i++;
                v.push_back(i%2);
            }
            else{
                v.push_back(i%2);
                i--;

            }


        }
        return v;
    }
};
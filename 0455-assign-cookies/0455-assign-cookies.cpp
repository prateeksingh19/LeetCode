static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
}();
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int student = 0;
        int cookie = 0;
        while( student < n && cookie < m ){
            if( s[cookie] >= g[student] ){
                student++;
            }
            cookie++;
        }
        return student;
    }
};
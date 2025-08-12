class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int N=asteroids.size();
        list<int>li;
        for(int i=0;i<N;i++){
            if(asteroids[i]>0){
                li.push_back(asteroids[i]);
            }
            else{
                while(!li.empty() && li.back()>0 && li.back() < abs(asteroids[i])){
                    li.pop_back();
                }
                if(!li.empty() && li.back()==abs(asteroids[i])){
                    li.pop_back();
                }
                else if(li.empty() || li.back()<0){
                    li.push_back(asteroids[i]);
                }
            }
        }
        return vector<int>(li.begin(),li.end());
    }
};
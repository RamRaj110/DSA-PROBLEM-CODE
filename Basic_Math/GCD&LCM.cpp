class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
       vector<int> v;
       int A = a;
       int B = b;
        
        while(a>0 && b>0){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
        }
        int GCD = (a == 0) ? b : a;
        
        int LCM =(A * B) / GCD;
        
        v.push_back(LCM);
        v.push_back(GCD);
        return v;
       
    }
};
Class Solution {

Public:

vector<vector>threesum(vector&nums) {

int n = nums.size() ;

vector<vector> ans;
if(n<3)

        return ans ;

    

    sort(nums.begin(),nums.end()) ;

    

    for(int i=n-1; i>=2 && nums[i]>=0; i--) {

        

        int j=0, k=i-1 ;

        

        while(j<k) {

            if(nums[j] + nums[k] + nums[i] == 0) {

                

                if(i<n-1 && nums[i] == nums[i+1])

                    break ;

                

                if(j>0 && nums[j] == nums[j-1])

                    j++;

                else if(k<i-1 && nums[k] == nums[k+1] )

                    k-- ;

                else{

                    ans.push_back({nums[j],nums[k],nums[i]}) ;

                    j++ ; 

                    k-- ;

                }

            }

            else if ( (nums[j] + nums[k] + nums[i])> 0)

                k-- ;

            else 

                j++ ;

        }

    }

    return ans ;

}

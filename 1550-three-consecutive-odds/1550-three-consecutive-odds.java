class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        for(int i=2; i<arr.length; i++){
            int sm=arr[i-2]%2 + arr[i-1]%2 + arr[i]%2;
            if(sm==3){
                return true;
            }
        }
        return false;
    }
}
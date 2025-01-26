class Solution {
    public boolean isPalindrome(int x) {
        String integr = Integer.toString(x);
        char[] arr = integr.toCharArray();
        int s = 0, e = arr.length -1;
        while(s<e){
        if(arr[s] != arr[e]) return false;
        s++;
        e--;
        }
        return true;
    }
}

class Solution {
    public boolean checkIfPangram(String sentence) {
        if(sentence.length() < 26) return false;
        int a = 97;
        for(int i = 0; i< 26; i++){
            int res = sentence.indexOf(a+i);
            if(res == -1) return false;
        }
        return true;
    }
}
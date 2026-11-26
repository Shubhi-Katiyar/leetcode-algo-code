class Solution {
public:
    bool canAliceWin(int n) {
        bool alice_stone=true;
        int stone=10;
        while(n>=stone&&n>=0){
            n=n-stone;
            stone--;
            alice_stone=!alice_stone;
        }
        return !alice_stone;
    }
};
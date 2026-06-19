class Solution {
public:

bool isVowel(char ch){
    return (ch =='a' || ch== 'e' || ch == 'o'|| ch =='u'|| ch == 'i'||
    ch =='A' || ch== 'E' || ch == 'O'|| ch =='U'|| ch == 'I');
}
    string reverseVowels(string s) {
        int st = 0 , end = s.length() -1;


        while(st<end){
            while(st < end && !isVowel(s[st])){
                st++;
            }
              while(st < end && !isVowel(s[end])){
                end--;
            }

            swap(s[st], s[end]);
            st++;
            end--;
        }
        return s;
    }
};
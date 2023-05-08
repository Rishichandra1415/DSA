class Solution {
public:
    string removeOccurrences(string s, string part) {

        //first travarse jbb tkk length hmra 0 kai equal nai aajata,....or apnn ko tbbtk loop chalna hai jbtkk part us length mai present hai ..   
        while(s.length()!=0&&s.find(part)<s.length()){

            // ismai erase krdena hai jo part milega apn ko aur remaining part print krdena  hai
            s.erase(s.find(part),part.length());//eraase is the predefined function ..
        }
     return s;
    }
};
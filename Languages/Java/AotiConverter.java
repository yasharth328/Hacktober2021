
//Implement the myAtoi(string s) function,
// which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

public class AotiConverter {

    public static int myAtoi(String s) {
        StringBuffer num = new StringBuffer("0");
        int numb = 0;
        int flag = 0;
        StringBuffer sign = new StringBuffer("+");
        int dup = 0;
        s.trim();

        for(int i = 0;i<s.length();i++){
            char ch = s.charAt(i);
            if(ch==' '){ continue; }
            else if (Character.isDigit(ch)){
                int j = i ;
                do{
                    char v = s.charAt(j);
                    num.append(v);
                    j++;
                }while(j<s.length()&&Character.isDigit(s.charAt(j)));
                break;
            }
            if((ch=='-')||(ch=='+')){
                int j = i ;
                if (j<s.length()-1){
                    j++;
                }

                if (!Character.isDigit(s.charAt(j))){
                    return 0 ;
                }

                flag++;
                if(flag>=2){
                    return 0;
                }
                sign.deleteCharAt(0);
                sign.append(""+ch);
            }

            else {
                break;
            }
        }

        StringBuffer num1 = sign.append(num.toString());

        try{
            numb = Integer.parseInt(num.toString());
        }catch(Exception e){
            if(sign.charAt(0)=='-'){
                return Integer.MIN_VALUE;
            }else{
                return Integer.MAX_VALUE;
            }
        }

        return Integer.parseInt(num1.toString());
    }


}

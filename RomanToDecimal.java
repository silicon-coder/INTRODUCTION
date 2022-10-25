import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class RomanToDecimal {
        static int charToDecimal(char ch){
            if(ch=='I')
                return 1;
            else if(ch=='X')
              return 10;
            else if(ch=='V')
             return 5;
            else if(ch=='L')
             return 50;
            else if(ch=='C')
            return 100;
            else if(ch=='D')
            return 500;
            else if(ch=='M')
             return 1000;
             else
              return 0;
        }  
        static int romanToDecimal(String str){
        int i=0;
        int total=0;
        while(i<str.length()){
            if(i==str.length()-1){
                total+=charToDecimal(str.charAt(i));
                return total;
            }
            int value1= charToDecimal(str.charAt(i));
            int value2 =charToDecimal(str.charAt(i+1));
            //IF CHAR  IS NOT VALID
            if(value1==0 || value2==0)
               return 0;
            
            if(value1>=value2){
            total+=value1;
            i++;
        }
        else{
            total+=(value2-value1);
            i=i+2;
        }
        
    }
    return total; 
}
   
    public static void main(String[] args) throws IOException{
        BufferedReader  bf  = new BufferedReader(new InputStreamReader(System.in));
        String str = bf.readLine();
        int res=romanToDecimal(str);
        System.out.println("res-:"+res);
    }
}

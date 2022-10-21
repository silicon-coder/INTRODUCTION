import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class FindLargestNumber {
    static Integer findMax(String str,  int i,int max){
        String temp = str.substring(0,i)+str.substring(i+1, str.length());
     
        if(Integer.parseInt(temp)>max){
            return Integer.parseInt(temp);
        }
        else{
            return max;
        }

    }
    static Integer solve(String str,String num){
        int max=0;
        int i=0;
        while(i<str.length()){
            if(String.valueOf(str.charAt(i)).equals(num)){
                
                max=findMax(str,i,max);
            }
            i++;
        }
        return max;
    }
    public static void main(String[] args)throws IOException {
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        String str = bf.readLine();
         String num = bf.readLine();
        int res = solve(str,num);
        System.out.println("res:-"+res);
    }
}

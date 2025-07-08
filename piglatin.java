import java.util.*;
public class piglatin
{
    public static void main(String[] args){
        String str,st1,st2;
        int i,c;
        char ch;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the word");
        str=sc.nextLine();
        str=str.toUpperCase();
        for(i=0;i<str.length();i++){
            ch=str.charAt(i);
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
               break;
            }
        }
        st2=str.substring(i,str.length());
        st1=str.substring(0,i);
        System.out.println("THE WORD: "+st2+st1+"AY");
    }
}

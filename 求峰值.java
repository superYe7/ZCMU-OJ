import java.util.Scanner;
public class Solution {
    public static void main(String []args){
        Scanner in=new Scanner(System.in);
        int arr[]=new int[5];
        for(int i=0;i<arr.length-1;i++){
            arr[i]=in.nextInt();
        }
        if(arr.length==0){
            return 0;
        }
        int result=0;
        for(int i=1;i<arr.length-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                result=i;
                break;
            }
        }
        System.out.println(result);
    }
}

import java.lang.*;
import java.util.*;

public class BubbleSort{
    public static void main(String[] args){
        int a[]={3,6,5,4,3,2,1};
        int temp;
        for(int i=0;i<(a.length-1);i++) {
            for (int j = 0; j < (a.length - 1); j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;

                }
            }
        }
        for(int x:a){
            System.out.print(x+" ");
        }
    }
}
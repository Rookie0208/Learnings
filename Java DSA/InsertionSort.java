import java.lang.*;
import java.util.*;

public class InsertionSort {
    public static void main(String arg[]){
        int a[]={0,89,3,6,5,4,3,2,1};
        int index;
        int temp;
        for(int i=1;i<a.length;i++) {
            temp=a[i];
            index=i;
            for (int j = (i-1); j >=0; j--) {
                if(temp<a[j]){
                    a[j+1]=a[j];
                    index=j;
                }
            }
            a[index]=temp;
        }
        for(int x:a){
            System.out.print(x+" ");
        }
    }

}

import java.lang.*;
import java.util.*;

public class SelectionSort {
    public static void main(String arg[]){
        int a[]={56,7,3,6,5,4,3,2,1,12,34,57,8,90,101,0};
        int temp;
        for(int i=0;i<a.length;i++) {
            int min=a[i];
            for (int j = i; j < a.length; j++) {
                if (min > a[j]){
                    min = a[j];
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

            }

        }


        for (int x: a) {
            System.out.print(x+" ");
        }

    }
}

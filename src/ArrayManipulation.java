import java.util.ArrayList;
import java.util.Arrays;


public class ArrayManipulation {
    public static void main(String[] args) throws Exception {
        ArrayList<Integer> arrayList = new ArrayList<>();
        Reader reader=new Reader();
        // check arraylist length increases dynamically
        int a=reader.nextInt();
        int val;
        for(int i=0;i<a;i++)
        {
            val= reader.nextInt();
            arrayList.add(val);
        }
        for(int i=0;i<a;i++)
        {
            System.out.println(arrayList.get(i));
        }
        // for cp 324,4354,436 -> arr [324,4354,436]
        String input= reader.readLine();
        int[] intArray = Arrays.stream(input.split(","))
                .mapToInt(Integer::parseInt)
                .toArray();
        for(int i=0;i< intArray.length;i++)
        {
            System.out.println(intArray[i]);
        }

    }
}
/*
add
clear
get(i)
clone
contains
remove
size
toArray
trimToSize
 */
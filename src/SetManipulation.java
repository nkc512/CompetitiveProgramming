import java.util.HashSet;
import java.util.Set;

public class SetManipulation{
    public static void main(String[] args) throws Exception {
        int x;
        Reader reader=new Reader();
        x=reader.nextInt();
        int val;
        Set<Integer> sets=new HashSet<>();
        for(int i=0;i<x;i++)
        {
            val= reader.nextInt();
            sets.add(val);


        }


        for(Integer check: sets)
        {
            System.out.println(check);
        }

    }
}
/*
add
clear
contains
isEmpty
iterator
remove
size

use addAll for union
retainAll intersection
symmetric difference removeAll

 */
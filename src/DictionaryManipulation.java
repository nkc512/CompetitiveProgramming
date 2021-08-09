import javax.lang.model.element.NestingKind;
import java.util.Dictionary;
import java.util.HashMap;
import java.util.Map;

public class DictionaryManipulation {
    public static void main(String[] args) throws Exception {
        int x;
        int key;
        String val;
        Reader reader=new Reader();
        x= reader.nextInt();
        //Dictionary<Integer, String> dictionary=new Dictionary<>();
        Map<Integer, String> mp=new HashMap<>();
        //mp.put(2,"checj");
        while((x--)>0)
        {
            key= reader.nextInt();
            val= reader.readLine();
            mp.put(key,val);

        }
        for(Map.Entry entry: mp.entrySet())
        {
            key= (int) entry.getKey();
            String value= (String) entry.getValue();
            System.out.println(key+" "+value);
        }
        //System.out.println(mp.get(234));

    }
}
/*
put
get
remove
size
keys

 */

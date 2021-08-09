import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
//Part 1 Scan class
//https://www.hackerearth.com/practice/notes/inputoutput-in-javascanner-bufferedreader-self-made-fast-io/
public class Print
{
    private final BufferedWriter bw;
    public Print()
    {
        this.bw=new BufferedWriter(new OutputStreamWriter(System.out));
    }
    public void print(Object object)throws IOException
    {
        bw.append(""+object);
    }
    public void println(Object object)throws IOException
    {
        print(object);
        bw.append("\n");
    }
    public void close()throws IOException
    {
        bw.close();
    }
}

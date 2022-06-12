
import java.io.*;
import java.net.Socket;


public class Client {
    // Define the address of the local port. Because it is on this machine, the port and address are defined as static constants
    private static final String HOST = "localhost";
    private static final int PORT = 1720;

    /**
           * @param fileName The path and file name of the uploaded file
     */
    public void upFile(String fileName) {
        try {
            Socket socket = new Socket(HOST, PORT);
            File file = new File(fileName);
            System.out.println("File length:" + (int) file.length());
            DataInputStream fileIn = new DataInputStream(new FileInputStream(fileName));
            DataOutputStream out = new DataOutputStream(socket.getOutputStream());
            byte[] buf = new byte[1024];
            while ((fileIn.read(buf))!=-1) {
                out.write(buf, 0, buf.length);
            }
            out.flush();
            fileIn.close();
            out.close();
            socket.close();
            System.out.println("File transfer completed");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
    
    public static void main(String[] args) {
        Client client = new Client();
        client.upFile("test.txt");
    }
}

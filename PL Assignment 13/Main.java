import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main extends Thread {

    private String fileString;
    private String wordString;

    public static void main(String[] args) throws FileNotFoundException {

        try {
            // Keyword to find
            String wordString = args[0];

            // assigning filenames to an array
            try {

                // System.out.println(args.length);
                Main main;

                for (int i = 1; i < args.length; i++) {
                    // System.out.println(args[i]);
                    main = new Main(wordString, args[i]);
                    main.start();
                }

                // Scanner scanner = new Scanner(System.in);
                // System.out.println("Enter word to be found");
                // String wordString = scanner.next();

                // for (String file : filename) {

                // System.out.println(main.fileString);

                // main.run(wordString, file);
                // }

            } catch (ArrayIndexOutOfBoundsException e) {

                System.out.println("Filename not provided");
            }

        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Word to be found not provided");
        }

    }

    public Main(String wordString, String filename) {
        super();
        this.wordString = wordString;
        this.fileString = filename;

    }

    public void run() {
        // boolean flag = false;

        // System.out.println("Printing contenct to find");
        // System.out.println(wordString);

        String filenameString = this.fileString;
        Scanner sc;
        try {
            sc = new Scanner(new FileInputStream(this.fileString));
            while (sc.hasNextLine()) {
                String line = sc.nextLine();
                int index1 = line.indexOf(this.wordString);

                while (index1 >= 0) {

                    System.out.print(filenameString);
                    System.out.print(": ");

                    try {
                        System.out.println(line.substring(index1, index1 + 40));
                    } catch (Exception e) {

                        System.out.println(line.substring(index1));
                    }

                    // flag = true;
                    index1 = line.indexOf(wordString, index1 + 1);
                }
            }
            // if (flag == false) {
            // System.out.println("Word not found in " + filenameString);
            // }
        } catch (FileNotFoundException e1) {

            System.out.println("Error: File not found" + e1.getMessage());
        }

    }

}
